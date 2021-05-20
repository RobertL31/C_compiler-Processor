----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:21:21 05/03/2021 
-- Design Name: 
-- Module Name:    register_bench - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values


-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity register_bench is
    Port ( adr_A : in  STD_LOGIC_VECTOR (3 downto 0);
           adr_B : in  STD_LOGIC_VECTOR (3 downto 0);
           adr_W : in  STD_LOGIC_VECTOR (3 downto 0);
           W : in  STD_LOGIC;
           DATA : in  STD_LOGIC_VECTOR (7 downto 0);
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           QA : out  STD_LOGIC_VECTOR (7 downto 0);
           QB : out  STD_LOGIC_VECTOR (7 downto 0));
end register_bench;



architecture Behavioral of register_bench is

	type t_regs is array (0 to 15) of STD_LOGIC_VECTOR(7 downto 0);
	signal regs : t_regs := (others => x"00");
	

begin
	
	process(CLK) 
	begin
	
		if rising_edge(CLK) then
			if RST = '0' then
				-- Resetting all registers
				regs(0 to 15) <= (others => x"00");
			else
				if W = '1' then
					-- We make a write
					regs(to_integer(unsigned(adr_W))) <= DATA;
				end if;	
			end if;
		end if;
	end process;
	
	 
	QA <= DATA when adr_A = adr_W and W = '1' 
					else regs(to_integer(unsigned(adr_A)));
	QB <= DATA when adr_B = adr_W and W = '1'
					else regs(to_integer(unsigned(adr_B)));

	
end Behavioral;

