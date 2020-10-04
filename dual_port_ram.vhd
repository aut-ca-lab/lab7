----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:34:34 09/17/2020 
-- Design Name: 
-- Module Name:    dual_port_ram - rtl 
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

entity dual_port_ram is
	

	port (
			DATA_IN_A : in std_logic_vector(7 downto 0);
			DATA_IN_B : in std_logic_vector(7 downto 0);
			ADDR_A : in std_logic_vector(1 downto 0);
			ADDR_B : in std_logic_vector(1 downto 0);
			W_A : in std_logic;
			R_A : in std_logic;
			W_B : in std_logic;
			R_B : in std_logic;
			clk : in std_logic;
			RESET : in std_logic;
			DATA_OUT_A : out std_logic_vector(7 downto 0);
			DATA_OUT_B : out std_logic_vector(7 downto 0)
			);

end dual_port_ram;

architecture rtl of dual_port_ram is

type ram_reg is array (3 downto 0) of std_logic_vector(7 downto 0);
signal ram : ram_reg;

begin

	process (clk , RESET)
	begin
		
			if(RESET = '0') then 
				for index in 0 to 3 loop
				ram(index) <= std_logic_vector(to_unsigned(index, DATA_IN_A'length));
				end loop;
			end if;
			
			if (rising_edge(clk)) then		
					
				if(W_A = '1' and R_A = '0' and W_B = '0' and R_B = '0') then 
					ram(to_integer(unsigned(ADDR_A))) <= DATA_IN_A;
				
				elsif (W_A = '0' and R_A = '1' and W_B = '0' and R_B = '0') then 
					DATA_OUT_A <= ram(to_integer(unsigned(ADDR_A)));
				
				elsif(W_A = '0' and R_A = '0' and W_B = '1' and R_B = '0') then 
					ram(to_integer(unsigned(ADDR_B))) <= DATA_IN_B;
				
				elsif (W_A = '0' and R_A = '0' and W_B = '0' and R_B = '1') then 
					DATA_OUT_B <= ram(to_integer(unsigned(ADDR_B)));
					
				end if;	
					
			end if;		
				
	end process;

end rtl;

