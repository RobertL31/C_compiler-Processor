----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:47:56 05/07/2021 
-- Design Name: 
-- Module Name:    processor - struct 
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

entity processor is
    Port ( CLK : in  STD_LOGIC;
			  RST : in STD_LOGIC);
end processor;

architecture struct of processor is

	component compteur
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           LOAD : in  STD_LOGIC;
			  STAND_BY: in STD_LOGIC;
           Din : in  STD_LOGIC_VECTOR (7 downto 0);
           Dout : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	 
	component UAL
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           Ctrl_Alu : in  STD_LOGIC_VECTOR (2 downto 0);
           N : out  STD_LOGIC;
           O : out  STD_LOGIC;
           Z : out  STD_LOGIC;
           C : out  STD_LOGIC;
           S : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;


	component data_memory 
    Port ( ADR : in  STD_LOGIC_VECTOR (7 downto 0);
           INData : in  STD_LOGIC_VECTOR (7 downto 0);
           RW : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           OUTData : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	
	component instruction_memory
    Port ( ADR : in  STD_LOGIC_VECTOR (7 downto 0);
           CLK : in  STD_LOGIC;
           OUTData : out  STD_LOGIC_VECTOR (31 downto 0));
	end component;
	
	
	component pipeline
    Port ( Ain : in  STD_LOGIC_VECTOR (7 downto 0);
           OPin : in STD_LOGIC_VECTOR (7 downto 0);
           Bin : in  STD_LOGIC_VECTOR (7 downto 0);
           Cin : in  STD_LOGIC_VECTOR (7 downto 0);
			  CLK : in STD_LOGIC;
			  Aout : out  STD_LOGIC_VECTOR (7 downto 0);
           OPout : out STD_LOGIC_VECTOR (7 downto 0);
           Bout : out  STD_LOGIC_VECTOR (7 downto 0);
           Cout : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
		
	component register_bench
		 Port ( adr_A : in  STD_LOGIC_VECTOR (3 downto 0);
				  adr_B : in  STD_LOGIC_VECTOR (3 downto 0);
				  adr_W : in  STD_LOGIC_VECTOR (3 downto 0);
				  W : in  STD_LOGIC;
				  DATA : in  STD_LOGIC_VECTOR (7 downto 0);
				  RST : in  STD_LOGIC;
				  CLK : in  STD_LOGIC;
				  QA : out  STD_LOGIC_VECTOR (7 downto 0);
				  QB : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	
	component LC1
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
			  Ctrl_Alu : out STD_LOGIC_VECTOR (2 downto 0));
	end component;
	
	
	component LC2
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           W : out  STD_LOGIC);
	end component;
	
	
	component LC3
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           RW : out  STD_LOGIC);
	end component;
	
	
	component multiplexer1
    Port ( SEL : in  STD_LOGIC_VECTOR (7 downto 0);
           IN1 : in  STD_LOGIC_VECTOR (7 downto 0);
           IN2 : in  STD_LOGIC_VECTOR (7 downto 0);
           OUTData : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	
	component multiplexer2
    Port ( SEL : in  STD_LOGIC_VECTOR (7 downto 0);
           IN1 : in  STD_LOGIC_VECTOR (7 downto 0);
           IN2 : in  STD_LOGIC_VECTOR (7 downto 0);
           OUTData : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	
	component multiplexer3
    Port ( SEL : in  STD_LOGIC_VECTOR (7 downto 0);
           IN1 : in  STD_LOGIC_VECTOR (7 downto 0);
           IN2 : in  STD_LOGIC_VECTOR (7 downto 0);
           OUTData : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	component multiplexer4 
    Port ( SEL : in  STD_LOGIC_VECTOR (7 downto 0);
           IN1 : in  STD_LOGIC_VECTOR (7 downto 0);
           IN2 : in  STD_LOGIC_VECTOR (7 downto 0);
           OUTData : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	
	component alea
    Port ( MEM_INSTR : in  STD_LOGIC_VECTOR(31 downto 0);
           LIDI_IN : in  STD_LOGIC_VECTOR(31 downto 0);
           DIEX : in  STD_LOGIC_VECTOR(31 downto 0);
			  MUX_SEL: out STD_LOGIC;
           STAND_BY : out  STD_LOGIC);
	end component;
	
	
	component multiplexer_alea
    Port ( SEL : in  STD_LOGIC;
           IN1 : in  STD_LOGIC_VECTOR (31 downto 0);
           OUTData : out  STD_LOGIC_VECTOR (31 downto 0));
	end component;
	
	
signal ip_adr : std_logic_vector(7 downto 0);
signal out_all : std_logic_vector(31 downto 0);
signal lidi_a_diex, lidi_op_diex, lidi_b_diex: std_logic_vector(7 downto 0);
signal lidi_c_adrb: std_logic_vector(7 downto 0);
signal QA_mux, mux_b_diex: std_logic_vector(7 downto 0);
signal QB_c_diex: std_logic_vector(7 downto 0);
signal diex_a_exmem, diex_op_exmem, diex_b_exmem: std_logic_vector(7 downto 0);
signal diex_c_ALUb: std_logic_vector(7 downto 0);
signal lc_ctrlAlu: std_logic_vector(2 downto 0);
signal S_mux: std_logic_vector(7 downto 0);
signal mux_b_exmem: std_logic_vector(7 downto 0);
signal exmem_a_memre, exmem_op_memre, exmem_b_memre: std_logic_vector(7 downto 0);
signal mux_memadr: std_logic_vector(7 downto 0);
signal out_mux, mux_b_memre: std_logic_vector (7 downto 0);
signal lc_rw : std_logic;
signal memre_a_adrW, memre_op_lc, memre_b_data : std_logic_vector(7 downto 0);
signal lc_op_W : std_logic;
	
-- aleas
signal alea_ip : STD_LOGIC;
signal alea_mux : STD_LOGIC;
signal mux_lidi : std_logic_vector(31 downto 0);
signal lidi_alea : std_logic_vector(31 downto 0);
signal diex_alea : std_logic_vector(31 downto 0);
	
begin
	
	IP : compteur port map(
		CLK => CLK, 
		RST => RST, 
		Dout => ip_adr, 
		STAND_BY => alea_ip,
		LOAD => '0', 
		Din => x"00"
	);
	
	
	instrMem : instruction_memory port map(
		ADR => ip_adr, 
		OUTData => out_all, 
		CLK => CLK
	);
	
	
	pipelineLIDI : pipeline port map(
		Ain => mux_lidi(23 downto 16),
		OPin => mux_lidi(31 downto 24), 
		Bin => mux_lidi(15 downto 8),
		Cin => mux_lidi(7 downto 0),
		CLK => CLK,
		Aout => lidi_a_diex, 
		OPout => lidi_op_diex, 
		Bout => lidi_b_diex,
		Cout => lidi_c_adrb
	);
	
	
	mux1 : multiplexer1 port map(
		SEL => lidi_op_diex,
		IN1 => lidi_b_diex,
		IN2 => QA_mux,
		OUTData => mux_b_diex
	);
	
	
	pipelineDIEX : pipeline port map(
		Ain => lidi_a_diex, 
		OPin => lidi_op_diex, 
		Bin => mux_b_diex,
		Cin => QB_c_diex,
		CLK => CLK,
		Aout => diex_a_exmem, 
		OPout => diex_op_exmem, 
		Bout => diex_b_exmem,
		Cout => diex_c_ALUb
	);
	
	
	LC1_comp : LC1 port map(
		OP => diex_op_exmem,
		Ctrl_Alu => lc_ctrlAlu
	);
	
	
	UAL_comp : UAL port map(
		A => diex_b_exmem,
		B => diex_c_ALUb,
		Ctrl_Alu => lc_ctrlAlu,
		S => S_mux
	);
	
	
	mux2 : multiplexer2 port map(
		SEL => diex_op_exmem,
		IN1 => diex_b_exmem,
		IN2 => S_mux,
		OUTData => mux_b_exmem
	);
	
	pipelineEXMEM : pipeline port map(
		Ain => diex_a_exmem, 
		OPin => diex_op_exmem, 
		Bin => mux_b_exmem,
		Cin => x"00",
		CLK => CLK,
		Aout => exmem_a_memre, 
		OPout => exmem_op_memre, 
		Bout => exmem_b_memre
	);
	
	mux4: multiplexer4 port map(
		SEL => exmem_op_memre,
		IN1 => exmem_a_memre,
		IN2 => exmem_b_memre,
		OUTData => mux_memadr
	
	);
	
	data_memory_comp: data_memory port map(
		ADR => mux_memadr,
      INData => exmem_b_memre,
      RW => lc_rw,
      RST => RST,
      CLK => CLK,
      OUTData => out_mux
	
	);
	
	mux3 : multiplexer3 port map(
		SEL => exmem_op_memre,
		IN1 => out_mux,
		IN2 => exmem_b_memre,
		OUTData => mux_b_memre
	
	);
	
	LC3_comp : LC3 port map(
		OP => exmem_op_memre,
		RW => lc_rw
	
	);
	
	pipelineMEMRE : pipeline port map(
		Ain => exmem_a_memre, 
		OPin => exmem_op_memre, 
		Bin => mux_b_memre,
		Cin => x"00",
		CLK => CLK,
		Aout => memre_a_adrW, 
		OPout => memre_op_lc, 
		Bout => memre_b_data
	);
						
						
	LC2_comp : LC2 port map( 
		OP => memre_op_lc, 
		W => lc_op_W
	);
		
		
	register_bench_comp: register_bench port map (
		W => lc_op_W, 
		adr_A => lidi_b_diex(3 downto 0),
		adr_B => lidi_c_adrb(3 downto 0),
		RST => RST,
		adr_W => memre_a_adrW(3 downto 0), 
		DATA => memre_b_data,
		QA => QA_mux,
		QB => QB_c_diex,
		CLK => CLK
	);
	
	
	
	alea_comp : alea port map (
		MEM_INSTR => out_all,
      LIDI_IN => lidi_op_diex(7 downto 0) & lidi_a_diex(7 downto 0) & lidi_b_diex(7 downto 0) & lidi_c_adrb(7 downto 0),
      DIEX => diex_op_exmem(7 downto 0) & diex_a_exmem(7 downto 0) & diex_b_exmem(7 downto 0) & diex_c_ALUb(7 downto 0),
		MUX_SEL => alea_mux,
      STAND_BY => alea_ip
	);
	
	
	mux_alea : multiplexer_alea port map (
		IN1 => out_all,
		SEL => alea_mux,
		OUTData => mux_lidi
	);
	
	
end struct;

