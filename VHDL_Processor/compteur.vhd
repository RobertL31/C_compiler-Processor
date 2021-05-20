----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:20:55 04/02/2021 
-- Design Name: 
-- Module Name:    compteur - Behavioral 
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
use IEEE.std_logic_unsigned.ALL;
use IEEE.std_logic_arith.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity compteur is
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           LOAD : in  STD_LOGIC := '0';
			  STAND_BY: in STD_LOGIC;
           Din : in  STD_LOGIC_VECTOR (7 downto 0);
           Dout : out  STD_LOGIC_VECTOR (7 downto 0));
end compteur;

architecture Behavioral of compteur is

signal aux: std_logic_vector(7 downto 0) := "00000000";

begin
	
	Dout <= aux;
	process(CLK)
	begin
		if rising_edge(CLK) then
			if RST='0' then aux <= "00000000"; 
			elsif LOAD='1' then aux <= Din;
			elsif STAND_BY='0' then aux <= aux + 1;
			end if;
		end if;
		
	end process;
end Behavioral;
