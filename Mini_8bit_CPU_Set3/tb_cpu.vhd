library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_cpu is
end tb_cpu;

architecture Behavioral of tb_cpu is

    component cpu
        Port (
            CLK    : in  STD_LOGIC;
            RESET  : in  STD_LOGIC;
            Q      : out STD_LOGIC_VECTOR(7 downto 0);
            Z      : out STD_LOGIC;
            PC_OUT : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    signal CLK_tb    : STD_LOGIC := '0';
    signal RESET_tb  : STD_LOGIC := '0';
    signal Q_tb      : STD_LOGIC_VECTOR(7 downto 0);
    signal Z_tb      : STD_LOGIC;
    signal PC_OUT_tb : STD_LOGIC_VECTOR(3 downto 0);

begin

    DUT: cpu
        port map (
            CLK    => CLK_tb,
            RESET  => RESET_tb,
            Q      => Q_tb,
            Z      => Z_tb,
            PC_OUT => PC_OUT_tb
        );

    CLK_PROCESS: process
    begin
        while true loop
            CLK_tb <= '0';
            wait for 5 ns;

            CLK_tb <= '1';
            wait for 5 ns;
        end loop;
    end process;

    STIMULUS_PROCESS: process
    begin

        RESET_tb <= '1';
        wait until rising_edge(CLK_tb);
        wait for 1 ns;

        assert Q_tb = x"00"
            report "RESET: ACC is not 00"
            severity error;

        assert Z_tb = '1'
            report "RESET: Z is not 1"
            severity error;

        assert PC_OUT_tb = "0000"
            report "RESET: PC is not 0"
            severity error;

        RESET_tb <= '0';
        wait until rising_edge(CLK_tb);
        wait for 1 ns;

        assert Q_tb = x"80"
            report "LDI failed"
            severity error;

        assert Z_tb = '0'
            report "LDI: Z is wrong"
            severity error;

        assert PC_OUT_tb = "0001"
            report "LDI: PC is wrong"
            severity error;
				
        wait until rising_edge(CLK_tb);
        wait for 1 ns;

        assert Q_tb = x"40"
            report "SHR failed"
            severity error;

        assert PC_OUT_tb = "0010"
            report "SHR: PC is wrong"
            severity error;

        wait until rising_edge(CLK_tb);
        wait for 1 ns;

        assert Q_tb = x"30"
            report "SUB failed"
            severity error;

        assert PC_OUT_tb = "0011"
            report "SUB: PC is wrong"
            severity error;

        wait until rising_edge(CLK_tb);
        wait for 1 ns;

        assert Q_tb = x"3F"
            report "ADD failed"
            severity error;

        assert PC_OUT_tb = "0100"
            report "ADD: PC is wrong"
            severity error;

        wait until rising_edge(CLK_tb);
        wait for 1 ns;

        assert Q_tb = x"00"
            report "XOR failed"
            severity error;

        assert Z_tb = '1'
            report "XOR: Z is wrong"
            severity error;

        assert PC_OUT_tb = "0101"
            report "XOR: PC is wrong"
            severity error;

        wait until rising_edge(CLK_tb);
        wait for 1 ns;

        assert Q_tb = x"07"
            report "Second ADD failed"
            severity error;

        assert Z_tb = '0'
            report "Second ADD: Z is wrong"
            severity error;

        assert PC_OUT_tb = "0110"
            report "Second ADD: PC is wrong"
            severity error;

        wait until rising_edge(CLK_tb);
        wait for 1 ns;

        assert Q_tb = x"03"
            report "Second SHR failed"
            severity error;

        assert PC_OUT_tb = "0111"
            report "Second SHR: PC is wrong"
            severity error;

        report "ALL SET 3 CPU TESTS PASSED"
            severity note;

        wait;

    end process;

end Behavioral;