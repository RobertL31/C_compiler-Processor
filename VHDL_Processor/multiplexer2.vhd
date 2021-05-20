----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:23:10 05/10/2021 
-- Design Name: 
-- Module Name:    multiplexer - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity multiplexer2 is
    Port ( SEL : in  STD_LOGIC_VECTOR (7 downto 0);
           IN1 : in  STD_LOGIC_VECTOR (7 downto 0);
           IN2 : in  STD_LOGIC_VECTOR (7 downto 0);
           OUTData : out  STD_LOGIC_VECTOR (7 downto 0));
end multiplexer2;

architecture Behavioral of multiplexer2 is

begin
		with SEL select
		OUTData <=  IN2 when x"01",
						IN2 when x"02",
						IN2 when x"03",
						IN2 when x"04",
						IN1 when others;
			
end Behavioral;