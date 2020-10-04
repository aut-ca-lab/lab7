----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:01:55 09/13/2020 
-- Design Name: 
-- Module Name:    RAM - Behavioral 
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

entity RAM is
    Port ( 
			DATA_IN : in std_logic_vector(7 downto 0);
			ADDR : in std_logic_vector(1 downto 0);
			W : in std_logic;
			R : in std_logic;
			clk : in std_logic;
			RESET : in std_logic;
			DATA_OUT : out std_logic_vector(7 downto 0)
			  );
end RAM;

architecture rtl of RAM is

type ram_reg is array (3 downto 0) of std_logic_vector(7 downto 0);
signal ram : ram_reg:= 
(
"00000000","00000001","00000010","00000011"
);

begin
	
	process (clk , RESET)
	begin
		
 if (RESET = '1') then
	if(rising_edge(clk)) then
		if(W = '1' and R = '0') then  
			ram(to_integer(unsigned(ADDR))) <= DATA_IN;
		elsif (R = '1' and W = '0') then 
			DATA_OUT <= ram(to_integer(unsigned(ADDR)));
		end if;
	end if;	
 
 elsif (RESET = '0') then
 
	for i in 0 to 3 loop
		ram(i) <= std_logic_vector(to_unsigned(i, 8));
	end loop;
 end if;	
				
	end process;
	

end rtl;

