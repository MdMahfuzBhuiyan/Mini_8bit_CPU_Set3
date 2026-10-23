library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity alu is
    Port (
        ACC_IN  : in  STD_LOGIC_VECTOR(7 downto 0);
        OPERAND : in  STD_LOGIC_VECTOR(7 downto 0);
        ALU_SEL : in  STD_LOGIC_VECTOR(2 downto 0);
        RESULT  : out STD_LOGIC_VECTOR(7 downto 0)
    );
end alu;

architecture Behavioral of alu is

begin

    process(ACC_IN, OPERAND, ALU_SEL)
    begin

        case ALU_SEL is

            when "000" =>
                RESULT <= OPERAND;
					 
            when "001" =>
                RESULT <= std_logic_vector(
                    unsigned(ACC_IN) + unsigned(OPERAND)
                );

            when "010" =>
                RESULT <= '0' & ACC_IN(7 downto 1);

            when "011" =>
                RESULT <= std_logic_vector(
                    unsigned(ACC_IN) - unsigned(OPERAND)
                );

            when "100" =>
                RESULT <= ACC_IN xor OPERAND;

            when others =>
                RESULT <= ACC_IN;

        end case;

    end process;

end Behavioral;