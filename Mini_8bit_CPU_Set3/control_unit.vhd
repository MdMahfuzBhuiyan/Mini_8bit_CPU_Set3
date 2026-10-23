library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control_unit is
    Port (
        OPCODE    : in  STD_LOGIC_VECTOR(3 downto 0);
        ALU_SEL   : out STD_LOGIC_VECTOR(2 downto 0);
        ACC_LOAD  : out STD_LOGIC;
        Z_LOAD    : out STD_LOGIC;
        PC_ENABLE : out STD_LOGIC
    );
end control_unit;

architecture Behavioral of control_unit is

begin

    process(OPCODE)
    begin

        ALU_SEL   <= "000";
        ACC_LOAD  <= '0';
        Z_LOAD    <= '0';
        PC_ENABLE <= '1';

        case OPCODE is

            when "0001" =>
                ALU_SEL  <= "000";
                ACC_LOAD <= '1';
                Z_LOAD   <= '1';

            when "0010" =>
                ALU_SEL  <= "001";
                ACC_LOAD <= '1';
                Z_LOAD   <= '1';

            when "0011" =>
                ALU_SEL  <= "011";
                ACC_LOAD <= '1';
                Z_LOAD   <= '1';

            when "0110" =>
                ALU_SEL  <= "100";
                ACC_LOAD <= '1';
                Z_LOAD   <= '1';

            when "1001" =>
                ALU_SEL  <= "010";
                ACC_LOAD <= '1';
                Z_LOAD   <= '1';

            when others =>
                ALU_SEL  <= "000";
                ACC_LOAD <= '0';
                Z_LOAD   <= '0';

        end case;

    end process;

end Behavioral;