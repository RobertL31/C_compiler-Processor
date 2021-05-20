----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:09:07 05/07/2021 
-- Design Name: 
-- Module Name:    instruction_memory - Behavioral 
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

entity instruction_memory is
    Port ( ADR : in  STD_LOGIC_VECTOR (7 downto 0);
           CLK : in  STD_LOGIC;
           OUTData : out  STD_LOGIC_VECTOR (31 downto 0));
end instruction_memory;

architecture Behavioral of instruction_memory is

	type t_memoryOfInstruction is array (0 to 255) of STD_LOGIC_VECTOR(31 downto 0);
	signal memoryOfInstruction : t_memoryOfInstruction := (x"06010900", x"06000800", x"01030100",others => x"00000000");

begin
	
			OUTData <= memoryOfInstruction(to_integer(unsigned(ADR)));
	

end Behavioral;

