--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:55:56 09/22/2020
-- Design Name:   
-- Module Name:   E:/Education/CA/Lab/LAB_7/LAB_7/uut_cam.vhd
-- Project Name:  LAB_7
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CAM
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
 
ENTITY uut_cam IS
END uut_cam;
 
ARCHITECTURE behavior OF uut_cam IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CAM
    PORT(
         clk : IN  std_logic;
         WR : IN  std_logic;
         RD : IN  std_logic;
         DATA : IN  std_logic_vector(7 downto 0);
         ADDR : IN  std_logic_vector(1 downto 0);
         ADDR_OUT : OUT  std_logic_vector(1 downto 0);
         MATCH_BIT : OUT  std_logic;
         RESET : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal WR : std_logic := '0';
   signal RD : std_logic := '0';
   signal DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal ADDR : std_logic_vector(1 downto 0) := (others => '0');
   signal RESET : std_logic := '0';

 	--Outputs
   signal ADDR_OUT : std_logic_vector(1 downto 0);
   signal MATCH_BIT : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CAM PORT MAP (
          clk => clk,
          WR => WR,
          RD => RD,
          DATA => DATA,
          ADDR => ADDR,
          ADDR_OUT => ADDR_OUT,
          MATCH_BIT => MATCH_BIT,
          RESET => RESET
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
      wait for clk_period/2;
			RESET <= '1';
     
     wait for clk_period;
			WR <= '1';
			DATA <= "00000001";
		
			
			
		wait for clk_period;
			WR <= '1';
			DATA <= "11111001";
		
			
		wait for clk_period;
			WR <= '1';
			DATA <= "11110000";
		
			
		wait for clk_period;
			WR <= '1';
			DATA <= "11100000";
			
		wait for clk_period;
			WR <= '1';
			DATA <= "11000000";
			
		wait for clk_period;
			WR <= '1';
			DATA <= "11101111";
	
		wait for clk_period;
			WR <= '1';
			DATA <= "10111111";
		
		wait for clk_period;
			WR <= '0';
			DATA <= "10111111";
	
		wait for clk_period;		
			RD <= '1';
			DATA <= "10111111";
			
		wait for clk_period;
			RD <= '1';
			DATA <= "10111111";
			
		wait for clk_period;
			RD <= '1';
			DATA <= "11101111";
		
		wait for clk_period;
			RD <= '1';
			DATA <= "10111111";
			
		wait for clk_period;
			RD <= '1';
			DATA <= "11111110";
		
		wait for clk_period;
			RD <= '1';
			DATA <= "10111111";

      wait;
   end process;

END;
