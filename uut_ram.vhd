--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:37:16 09/13/2020
-- Design Name:   
-- Module Name:   E:/Education/CA/Lab/LAB_7/LAB_7/uut_ram.vhd
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY uut_ram IS
END uut_ram;
 
ARCHITECTURE behavior OF uut_ram IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RAM
    PORT(
         clk : IN  std_logic;
         WR : IN  std_logic;
         RD : IN  std_logic;
         DATA : INOUT  std_logic_vector(7 downto 0);
         ADDR : IN  integer RANGE 0 to 3;
         Reset : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal WR : std_logic := '0';
   signal RD : std_logic := '0';
   signal ADDR :integer RANGE 0 to 3 := 0;
   signal Reset : std_logic := '1';

	--BiDirs
   signal DATA : std_logic_vector(7 downto 0):= "00000000";

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RAM PORT MAP (
          clk => clk,
          WR => WR,
          RD => RD,
          DATA => DATA,
          ADDR => ADDR,
          Reset => Reset
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
      -- hold reset state for 100 ns.
      wait for 10*clk_period ;	
      DATA <= "10101111";
		wait for clk_period / 2;	
		WR <= '1';
		ADDR <= 2;
		
		wait for 10*clk_period;	
	
		RD <= '1';
		ADDR <= 2;
		
		wait for 10*clk_period ;		
	
		RD <= '1';
		ADDR <= 1;
		
		wait for 10*clk_period ;		
	
		Reset <= '0';
		wait for 10*clk_period ;	
		
		RD <= '1';
		ADDR <= 2;
      
		
      wait;
   end process;

END;
