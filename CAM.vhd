----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:45:06 09/17/2020 
-- Design Name: 
-- Module Name:    CAM - rtl 
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

entity CAM is

    Port ( clk : in  STD_LOGIC;
           WR : in  STD_LOGIC;
           RD : in  STD_LOGIC;
           DATA : in  STD_LOGIC_VECTOR (7 downto 0);
			  ADDR : in  STD_LOGIC_VECTOR (1 downto 0);
           ADDR_OUT : out  STD_LOGIC_VECTOR (1 downto 0);
           MATCH_BIT : out  STD_LOGIC;
           RESET : in  STD_LOGIC
			 );

end CAM;

	architecture rtl of CAM is

type cam_reg is array (3 downto 0) of std_logic_vector(7 downto 0);
signal cam : cam_reg;

begin

process (clk , RESET)
	
variable HIT : std_ulogic := '0';
begin
		
		if (RESET = '0') then 
				for index in 0 to 3 loop
					cam(index) <= "UUUUUUUU";
				end loop;
			
		elsif rising_edge(clk) then
				HIT := '0';
				if WR = '1' then
					LOOP1:for i in 0 to 3 loop
								if cam(i) = DATA then
									HIT := '1';
									ADDR_OUT <= std_logic_vector(to_unsigned(i, ADDR_OUT'length));
									exit LOOP1;
							   end if;
					end loop LOOP1;
					
					if HIT = '0' then
						LOOP2:for i in 0 to 3 loop
							if cam(i) = "UUUUUUUU" then
								HIT := '1';
								cam(i) <= DATA;
								ADDR_OUT <= std_logic_vector(to_unsigned(i, ADDR_OUT'length));
								MATCH_BIT <= '0';
								exit LOOP2; 
							end if;
						end loop LOOP2;
						
						if HIT = '0' then
							cam(to_integer(unsigned(ADDR))) <= DATA;
							ADDR_OUT <= ADDR;
							MATCH_BIT <= '0';
						end if;
					end if;
					
				elsif RD = '1' then
						LOOP3:for i in 0 to 3 loop
							if cam(i) = DATA then
								HIT := '1';
								ADDR_OUT <= std_logic_vector(to_unsigned(i, ADDR_OUT'length));
								MATCH_BIT <= '1';
								exit LOOP3;
							end if;
						end loop LOOP3;
						if HIT = '0' then
							MATCH_BIT <= '0';
						end if;
						HIT := '0';
					
				end if;
			end if;
				
	end process;

end rtl;

