----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:10:09 05/07/2021 
-- Design Name: 
-- Module Name:    data_memory - Behavioral 
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

entity data_memory is
    Port ( ADR : in  STD_LOGIC_VECTOR (7 downto 0);
           INData : in  STD_LOGIC_VECTOR (7 downto 0);
           RW : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           OUTData : out  STD_LOGIC_VECTOR (7 downto 0));
end data_memory;

architecture Behavioral of data_memory is

	type t_memoryOfData is array (0 to 255) of STD_LOGIC_VECTOR(7 downto 0);
	signal memoryOfData : t_memoryOfData := (x"FF", others => x"00");

begin
	process(CLK)
	begin
		
		if falling_edge(CLK) then
			if RST = '0' then
				memoryOfData(0 to 255) <= (others => x"00");
			else
				if RW = '1' then
					OUTData <= memoryOfData(to_integer(unsigned(ADR)));
				else 
					memoryOfData(to_integer(unsigned(ADR))) <= INData;
				end if;
			end if;
		end if;  
		
	end process;


end Behavioral;

