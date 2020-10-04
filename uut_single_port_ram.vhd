--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:46:56 09/22/2020
-- Design Name:   
-- Module Name:   E:/Education/CA/Lab/LAB_7/LAB_7/uut_single_port_ram.vhd
-- Project Name:  LAB_7
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RAM
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
USE ieee.std_logic_unsigned.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY uut_single_port_ram IS
END uut_single_port_ram;
 
ARCHITECTURE behavior OF uut_single_port_ram IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RAM
    PORT(
         DATA_IN : IN  std_logic_vector(7 downto 0);
         ADDR : IN  std_logic_vector(1 downto 0);
         W : IN  std_logic;
         R : IN  std_logic;
         clk : IN  std_logic;
         RESET : IN  std_logic;
         DATA_OUT : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal DATA_IN : std_logic_vector(7 downto 0) := (others => '0');
   signal ADDR : std_logic_vector(1 downto 0) := (others => '0');
   signal W : std_logic := '0';
   signal R : std_logic := '0';
   signal clk : std_logic := '0';
   signal RESET : std_logic := '0';

 	--Outputs
   signal DATA_OUT : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RAM PORT MAP (
          DATA_IN => DATA_IN,
          ADDR => ADDR,
          W => W,
          R => R,
          clk => clk,
          RESET => RESET,
          DATA_OUT => DATA_OUT
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
      
		W <= '1';
		R <= '0';	
		ADDR <= "00";
		DATA_IN <= "10100101";
      wait for 100 ns;	
		for i in 0 to 2 loop
			ADDR <= ADDR + "01";
			DATA_IN <= DATA_IN + "00000001";
			wait for clk_period*5;
		end loop;
		
		
		W <= '0';
		R <= '1';
		ADDR <= "00";
      wait for 100 ns;	
		for i in 0 to 2 loop
			ADDR <= ADDR + "01";
			wait for clk_period*5;
		end loop;
		wait for 100 ns;
		 
		RESET <= '0';
		wait for 300 ns;	
		
		RESET <= '1';
		
		W <= '0';
		R <= '1'	;
		ADDR <= "00";
      wait for 100 ns;	
		for i in 0 to 2 loop
			ADDR <= ADDR + "01";
			wait for clk_period*5;
		end loop;
   	wait;
   
   end process;

END;
