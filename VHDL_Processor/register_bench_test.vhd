--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:48:05 05/03/2021
-- Design Name:   
-- Module Name:   /home/acalmet/bouh/register_bench_test.vhd
-- Project Name:  bouh
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: register_bench
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY register_bench_test IS
END register_bench_test;
 
ARCHITECTURE behavior OF register_bench_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT register_bench
    PORT(
         adr_A : IN  std_logic_vector(3 downto 0);
         adr_B : IN  std_logic_vector(3 downto 0);
         adr_W : IN  std_logic_vector(3 downto 0);
         W : IN  std_logic;
         DATA : IN  std_logic_vector(7 downto 0);
         RST : IN  std_logic;
         CLK : IN  std_logic;
         QA : OUT  std_logic_vector(7 downto 0);
         QB : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal adr_A : std_logic_vector(3 downto 0) := (others => '0');
   signal adr_B : std_logic_vector(3 downto 0) := (others => '0');
   signal adr_W : std_logic_vector(3 downto 0) := (others => '0');
   signal W : std_logic := '0';
   signal DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal RST : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal QA : std_logic_vector(7 downto 0);
   signal QB : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: register_bench PORT MAP (
          adr_A => adr_A,
          adr_B => adr_B,
          adr_W => adr_W,
          W => W,
          DATA => DATA,
          RST => RST,
          CLK => CLK,
          QA => QA,
          QB => QB
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.

		adr_A <= x"F" after 10 ns, x"E" after 40 ns;
		adr_B <= x"E" after 10 ns, x"F" after 40 ns;

		DATA <= "10000000" after 10 ns, "10101010" after 20 ns;
		W <= '1' after 10 ns, '0' after 30 ns;
		adr_W <= x"F" after 10 ns, x"E" after 20ns;
		
      RST <= '1' after 10 ns, '0' after 100 ns;
		

      -- insert stimulus here 

      wait;
   end process;

END;
