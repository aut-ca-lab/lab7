--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:37:22 09/22/2020
-- Design Name:   
-- Module Name:   E:/Education/CA/Lab/LAB_7/LAB_7/uut_dual_port_ram.vhd
-- Project Name:  LAB_7
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: dual_port_ram
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
use ieee.std_logic_unsigned.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY uut_dual_port_ram IS
END uut_dual_port_ram;
 
ARCHITECTURE behavior OF uut_dual_port_ram IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT dual_port_ram
    PORT(
         DATA_IN_A : IN  std_logic_vector(7 downto 0);
         DATA_IN_B : IN  std_logic_vector(7 downto 0);
         ADDR_A : IN  std_logic_vector(1 downto 0);
         ADDR_B : IN  std_logic_vector(1 downto 0);
         W_A : IN  std_logic;
         R_A : IN  std_logic;
         W_B : IN  std_logic;
         R_B : IN  std_logic;
         clk : IN  std_logic;
         RESET : IN  std_logic;
         DATA_OUT_A : OUT  std_logic_vector(7 downto 0);
         DATA_OUT_B : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal DATA_IN_A : std_logic_vector(7 downto 0) := (others => '0');
   signal DATA_IN_B : std_logic_vector(7 downto 0) := (others => '0');
   signal ADDR_A : std_logic_vector(1 downto 0) := (others => '0');
   signal ADDR_B : std_logic_vector(1 downto 0) := (others => '0');
   signal W_A : std_logic := '0';
   signal R_A : std_logic := '0';
   signal W_B : std_logic := '0';
   signal R_B : std_logic := '0';
   signal clk : std_logic := '0';
   signal RESET : std_logic := '0';

 	--Outputs
   signal DATA_OUT_A : std_logic_vector(7 downto 0);
   signal DATA_OUT_B : std_logic_vector(7 downto 0);
   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: dual_port_ram PORT MAP (
          DATA_IN_A => DATA_IN_A,
          DATA_IN_B => DATA_IN_B,
          ADDR_A => ADDR_A,
          ADDR_B => ADDR_B,
          W_A => W_A,
          R_A => R_A,
          W_B => W_B,
          R_B => R_B,
          clk => clk,
          RESET => RESET,
          DATA_OUT_A => DATA_OUT_A,
          DATA_OUT_B => DATA_OUT_B
        );
		  
   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;

   -- Stimulus process
   stim_proc: process
   begin	
	
     RESET <= '1';
      
		W_A <= '1';
		W_B <= '0';
		R_A <= '0';
		R_B <= '0';
		
		ADDR_A <= "00";
		ADDR_B <= "00";
		DATA_IN_A <= "10101010";
      DATA_IN_B <= "10101010";
		wait for 100 ns;	
		
		for i in 0 to 1 loop
			ADDR_A <= ADDR_A + "01";
			ADDR_B <= ADDR_B + "01";
			DATA_IN_A <= DATA_IN_A + "00000001";
			DATA_IN_B <= DATA_IN_B + "00000010";
			wait for clk_period*5;
		end loop;
		wait for 100 ns;	
		W_A <= '0';
		W_B <= '1';
		ADDR_A <= "00";
		ADDR_B <= "00";
		for i in 0 to 2 loop
			ADDR_A <= Addr_A + "01";
			ADDR_B <= Addr_b + "01";
			DATA_IN_A <= DATA_IN_A + "00000001";
			DATA_IN_B <= DATA_IN_B + "00000001";
			wait for clk_period*5;
		end loop;
		wait for 100 ns;
		
		W_A <= '0';
		W_B <= '0';
		R_A <= '0';
		R_B <= '1';
		ADDR_A <= "00"; 
		ADDR_B <= "00";
		wait for 100 ns;	
		for i in 0 to 1 loop
			ADDR_A <= ADDR_A + "01";
			ADDR_B <= ADDR_B + "01";
			wait for clk_period*5;
		end loop;
		wait for 100 ns;
		R_A <= '1';
		R_B <= '0';
		
		for i in 0 to 1 loop
			ADDR_A <= ADDR_A + "01";
			ADDR_B <= ADDR_B + "01";
			wait for clk_period*5;
		end loop;
		
		wait for 100 ns;
		
		RESET <= '0';
		wait for 300 ns;	
		
		RESET <= '1';
		
		W_A <= '0';
		W_B <= '0';
		R_A <= '1';
		R_B <= '1';
		ADDR_A <= "00"; 
		ADDR_B <= "00";
		wait for 100 ns;	
		for i in 0 to 1 loop
			ADDR_A <= ADDR_A + "01";
			ADDR_B <= ADDR_B + "01";
			wait for clk_period*5;
		end loop;
		wait for 100 ns;
	
      wait;
   end process;

END;
