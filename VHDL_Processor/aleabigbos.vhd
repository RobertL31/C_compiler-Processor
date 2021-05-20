----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:57:56 05/18/2021 
-- Design Name: 
-- Module Name:    alea - Behavioral 
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

entity alea is
	-- Has to be std_logic_vector
    Port ( MEM_INSTR : in  STD_LOGIC_VECTOR(31 downto 0);
           LIDI_IN : in  STD_LOGIC_VECTOR(31 downto 0);
           DIEX : in  STD_LOGIC_VECTOR(31 downto 0);
			  MUX_SEL: out STD_LOGIC;
           STAND_BY : out  STD_LOGIC);
end alea;

architecture Behavioral of alea is

signal rw_conflict : STD_LOGIC;
signal register_conflict : STD_LOGIC;
signal problem: STD_LOGIC;
signal tempo: STD_LOGIC_VECTOR(7 downto 0);

begin

		

			rw_conflict <= '1' when 
					(MEM_INSTR(31 downto 24) = x"05" 
						or MEM_INSTR(31 downto 24) = x"01")
					and 
					(LIDI_IN(31 downto 24) = x"06" 
						or DIEX(31 downto 24) = x"06"
						or LIDI_IN(31 downto 24) = x"01" 
						or DIEX(31 downto 24) = x"01"
						or LIDI_IN(31 downto 24) = x"02" 
						or DIEX(31 downto 24) = x"02"
						or LIDI_IN(31 downto 24) = x"03" 
						or DIEX(31 downto 24) = x"03"
						or LIDI_IN(31 downto 24) = x"04" 
						or DIEX(31 downto 24) = x"04") 
						--or EXMEM(31 downto 24) = x"06"))
					else '0';
			
			register_conflict <= '1' when 
					(MEM_INSTR(15 downto 8) = LIDI_IN(23 downto 16)
						or MEM_INSTR(7 downto 0) = LIDI_IN(23 downto 16)
						or MEM_INSTR(15 downto 8) = DIEX(23 downto 16)
						or MEM_INSTR(7 downto 0) = DIEX(23 downto 16))
					--or MEM_INSTR(15 downto 8) = EXMEM(23 downto 16)
					else '0';
			MUX_SEL <= '1' when register_conflict='1' and rw_conflict='1' 
								else '0';
			
			--on a un problème
			STAND_BY <='1' when register_conflict='1' and rw_conflict='1'  
								else '0';
			
			
			
					
			
			


end Behavioral;

