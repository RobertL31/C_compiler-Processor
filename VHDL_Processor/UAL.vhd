----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:41:18 04/13/2021 
-- Design Name: 
-- Module Name:    UAL - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.std_logic_unsigned.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity UAL is
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           Ctrl_Alu : in  STD_LOGIC_VECTOR (2 downto 0);
           N : out  STD_LOGIC;
           O : out  STD_LOGIC;
           Z : out  STD_LOGIC;
           C : out  STD_LOGIC;
           S : out  STD_LOGIC_VECTOR (7 downto 0));
end UAL;


--si 0 en MSB sur ctrl_alu on dit que c'est unsigned sinon signed
architecture Behavioral of UAL is

	signal aux: std_logic_vector(15 downto 0);
	signal aux_signed : signed(15 downto 0);

	signal A_doublesize:STD_LOGIC_VECTOR (15 downto 0);
	signal B_doublesize:STD_LOGIC_VECTOR (15 downto 0);
	signal A_doublesize_sign:STD_LOGIC_VECTOR (15 downto 0);
	signal B_doublesize_sign:STD_LOGIC_VECTOR (15 downto 0);
	--signal Zero_padding:STD_LOGIC_VECTOR (7 downto 0):=(others=>'0');

begin
	A_doublesize_sign(15 downto 8) <= (others => A(7));
	A_doublesize_sign(7 downto 0) <= A;
	B_doublesize_sign(15 downto 8) <= (others => B(7));
	B_doublesize_sign(7 downto 0) <= B;

	A_doublesize <= x"00" & A;
	B_doublesize <= x"00" & B;
	S <= aux(7 downto 0);

	process (A,B,A_doublesize,B_doublesize,A_doublesize_sign,B_doublesize_sign,Ctrl_Alu)
	begin
		case Ctrl_Alu is
		when "000" =>
			aux <= (A_doublesize)+ (B_doublesize);
		when "001" => 
			aux <= (A_doublesize)- (B_doublesize);
		when "010"	=> 
			aux <= A * B;
		when "100"=>
			aux <= (A_doublesize_sign)+ (B_doublesize_sign);
		when others =>
			aux <= x"0000";
		end case;
		--wait;
	end process;


	process (A,B,aux,Ctrl_Alu, A_doublesize, B_doublesize, aux_signed)
	begin
		case Ctrl_Alu is
		when "000" =>
			N <= '0';
			if (aux(8) = '1') then
				C <= '1';
				O <= '1';
			else 
				C <= '0';
				O <= '0';
			end if;
			
			if (A_doublesize) = 0 and (B_doublesize) = 0 then
				Z <= '1';
			else 
				Z <= '0';
			end if;
		
		-- ON converti les nombres sur 8 bits en nombres sur 9. 
		-- Le 2eme bit prend la valeur du signe, dont le nombre sur 8 bits
		-- original n'a plus besoin du complément à 2.
		-- Exemple: A = "1000 0000" qui est égal à -128 devient "1 1000 0000"
		-- qui est - 128 sans le problème du complément à 2.
		when "001" => 
			
			C <= '0';
			O <= '0';
			if (A_doublesize) > (B_doublesize) then -- positive number
				N <= '0';
				Z <= '0';
			elsif (A_doublesize) < (B_doublesize) then --negative number
				N <= '1';
				Z <= '0';
			else 
				N <= '0';
				Z <= '1';
			end if;
			
		--multiplication de unsigned numbers
		when "010"	=> 
			C <= '0';
			N <= '0';
			if (A_doublesize) = 0 or (B_doublesize) = 0 then
				Z <= '1';
				O <= '0';
			else
				Z <= '0';
				if (aux(15 downto 8) = "00000000") then
					O <= '0';
				else
					O <= '1';
				end if;
			end if;
			
		when "100"=>
			-- si A_aux et B_aux sont positifs et qu'ils ont une carry
			if A(7) = B(7) then
				if aux(7) = A(7) then
					O <= '0';
				else
					O <= '1';
				end if;
			else
				O <= '0';
			end if;
			
			if (signed(A_doublesize) > 0 and signed(A_doublesize) > 0 and (signed(A_doublesize)+signed(B_doublesize)) > "0000000001111111") then
				C <= '1';
				N <= '0';
				Z <= '0';
			--si A_aux et B_aux sont nuls
			elsif (signed(aux_signed) = 0)then
				Z <= '1';
				C <= '0';
				N <= '0';
			--si A_aux et B_aux sont négatifs et qu'ils ont une carry
			elsif (A_doublesize(7) = '0' and B_doublesize(7)= '0' and (signed(A_doublesize)+signed(B_doublesize)) > "0000000011111111") then
				C <= '1';
				N <= '1';
				Z <= '0';
			-- si A_aux et B_aux font un résultat négatif 
			elsif (aux_signed(15)='1')then
				C <= '0';
				N <= '1';
				Z <= '0';
			-- si A_aux et B_aux font un résultat positif
			elsif (aux_signed(7)='0')then
				C <= '0';
				N <= '0';
				Z <= '0';
			end if;
		when others =>
			Z<='1';
			N<='1';
		end case;
	end process;

--	process (A,B,Ctrl_Alu)
--	begin
--		case Ctrl_Alu is
--		
--		when "000" =>
--			aux <= (A_doublesize)+ (B_doublesize);
--			N <= '0';
--			if (aux(8) = '1') then
--				C <= '1';
--				O <= '1';
--			else 
--				C <= '0';
--				O <= '0';
--			end if;
--			
--			if (A_doublesize) = 0 and (B_doublesize) = 0 then
--				Z <= '1';
--			else 
--				Z <= '0';
--			end if;
--		
--		-- ON converti les nombres sur 8 bits en nombres sur 9. 
--		-- Le 2eme bit prend la valeur du signe, dont le nombre sur 8 bits
--		-- original n'a plus besoin du complément à 2.
--		-- Exemple: A = "1000 0000" qui est égal à -128 devient "1 1000 0000"
--		-- qui est - 128 sans le problème du complément à 2.
--		when "001" => 
--			aux <= (A_doublesize)- (B_doublesize);
--			
--			C <= '0';
--			O <= '0';
--			if (A_doublesize) > (B_doublesize) then -- positive number
--				N <= '0';
--				Z <= '0';
--			elsif (A_doublesize) < (B_doublesize) then --negative number
--				N <= '1';
--				Z <= '0';
--			else 
--				N <= '0';
--				Z <= '1';
--			end if;
--			
--		--multiplication de unsigned numbers
--		when "010"	=> 
--			aux <= A_doublesize(7 downto 0) * B_doublesize(7 downto 0);
--			C <= '0';
--			N <= '0';
--			if (A_doublesize) = 0 or (B_doublesize) = 0 then
--				Z <= '1';
--				O <= '0';
--			else
--				Z <= '0';
--				if (aux(15 downto 8) = "00000000") then
--					O <= '0';
--				else
--					O <= '1';
--				end if;
--			end if;
--			
--			
--		when "100"=>
--			aux_signed <= signed(A_doublesize)+ signed(B_doublesize);
--			-- si A_aux et B_aux sont positifs et qu'ils ont une carry
--			if (signed(A_doublesize) > 0 and signed(A_doublesize) > 0 and (signed(A_doublesize)+signed(B_doublesize)) > "0000000001111111") then
--				C <= '1';
--				O <= '1';
--				N <= '0';
--				Z <= '0';
--			--si A_aux et B_aux sont nuls
--			elsif (signed(aux_signed) = 0)then
--				Z <= '1';
--				C <= '0';
--				O <= '0';
--				N <= '0';
--			--si A_aux et B_aux sont négatifs et qu'ils ont une carry
--			elsif (A_doublesize(7) = '0' and B_doublesize(7)= '0' and (signed(A_doublesize)+signed(B_doublesize)) > "0000000011111111") then
--				C <= '1';
--				O <= '1';
--				N <= '1';
--				Z <= '0';
--			-- si A_aux et B_aux font un résultat négatif 
--			elsif (aux_signed(15)='1')then
--				C <= '0';
--				O <= '0';
--				N <= '1';
--				Z <= '0';
--			-- si A_aux et B_aux font un résultat positif
--			elsif (aux_signed(7)='0')then
--				C <= '0';
--				O <= '0';
--				N <= '0';
--				Z <= '0';
--			end if;
--		
--		when others=>Z<='1';
--						N<='1';
--		--when "011" => (aux <= unsigned(A)/unsigned(B))
--		
--		-- addition de signed numbers
--		
--		
--				
--			
--			-- soustraction de signed numbers
--		 
--		
--		--when "110"	=> (aux <= A*B)
--		
--		
--		--when "111" => (aux <= A/B)
--		
--		end case;
--		--wait;
--		end process;

end Behavioral;

