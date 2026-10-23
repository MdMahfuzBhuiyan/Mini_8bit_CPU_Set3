library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity accu_reg is
    Port (
        CLK     : in  STD_LOGIC;
        RESET   : in  STD_LOGIC;
        LOAD    : in  STD_LOGIC;
        DATA_IN : in  STD_LOGIC_VECTOR(7 downto 0);
        ACC_OUT : out STD_LOGIC_VECTOR(7 downto 0);
        Z_OUT   : out STD_LOGIC
    );
end accu_reg;

architecture Behavioral of accu_reg is

    signal acc_reg : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal z_reg   : STD_LOGIC := '1';

begin

    process(CLK)
    begin

        if rising_edge(CLK) then

            if RESET = '1' then
                acc_reg <= (others => '0');
                z_reg   <= '1';

            elsif LOAD = '1' then
                acc_reg <= DATA_IN;

                if DATA_IN = x"00" then
                    z_reg <= '1';
                else
                    z_reg <= '0';
                end if;

            end if;

        end if;
    end process;

    ACC_OUT <= acc_reg;
    Z_OUT   <= z_reg;

end Behavioral;