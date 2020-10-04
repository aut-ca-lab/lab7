----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:57:14 09/15/2020 
-- Design Name: 
-- Module Name:    ROM - rtl 
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
use IEEE.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ROM is

port
	(
			ADDR: in std_logic_vector(1 downto 0);
			clk : in  std_logic;
			DATA_OUT : out std_logic_vector(7 downto 0)
	);
	
end ROM;

architecture rtl of ROM is

type ROM_reg is array (3 downto 0) of std_logic_vector(7 downto 0);
signal ROM : ROM_reg:=(
"00000010","00001000","10100000","00000001"
);

begin

	process (clk)
	begin	
   		if (rising_edge(clk)) then					
				DATA_OUT <= ROM(to_integer(unsigned(ADDR)));
			end if;		
				
	end process;
	
end rtl;

