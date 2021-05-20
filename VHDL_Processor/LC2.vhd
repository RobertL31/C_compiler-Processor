----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:40:26 05/07/2021 
-- Design Name: 
-- Module Name:    LC - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity LC2 is
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           W : out  STD_LOGIC);
end LC2;

architecture Behavioral of LC2 is

begin
	process(OP)
	begin
	
		if OP = x"01" then W <= '1'; 
		elsif OP = x"02" then W <= '1';
		elsif OP = x"03" then W <= '1'; 
		elsif OP = x"04" then W <= '1';
		elsif OP = x"05" then W <= '1'; 
		elsif OP = x"06" then W <= '1';
		elsif OP = x"07" then W <= '1';
		else W <= '0';
		end if;
	
	end process;


end Behavioral;

