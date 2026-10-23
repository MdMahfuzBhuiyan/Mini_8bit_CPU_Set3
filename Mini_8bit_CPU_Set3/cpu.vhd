library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu is
    Port (
        CLK    : in  STD_LOGIC;
        RESET  : in  STD_LOGIC;
        Q      : out STD_LOGIC_VECTOR(7 downto 0);
        Z      : out STD_LOGIC;
        PC_OUT : out STD_LOGIC_VECTOR(3 downto 0)
    );
end cpu;

architecture Structural of cpu is

    component counter
        Port (
            CLK    : in  STD_LOGIC;
            RESET  : in  STD_LOGIC;
            PC_OUT : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    component rom
        Port (
            ADDR  : in  STD_LOGIC_VECTOR(3 downto 0);
            INSTR : out STD_LOGIC_VECTOR(11 downto 0)
        );
    end component;

    component control_unit
        Port (
            OPCODE    : in  STD_LOGIC_VECTOR(3 downto 0);
            ALU_SEL   : out STD_LOGIC_VECTOR(2 downto 0);
            ACC_LOAD  : out STD_LOGIC;
            Z_LOAD    : out STD_LOGIC;
            PC_ENABLE : out STD_LOGIC
        );
    end component;

    component alu
        Port (
            ACC_IN  : in  STD_LOGIC_VECTOR(7 downto 0);
            OPERAND : in  STD_LOGIC_VECTOR(7 downto 0);
            ALU_SEL : in  STD_LOGIC_VECTOR(2 downto 0);
            RESULT  : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    component accu_reg
        Port (
            CLK     : in  STD_LOGIC;
            RESET   : in  STD_LOGIC;
            LOAD    : in  STD_LOGIC;
            DATA_IN : in  STD_LOGIC_VECTOR(7 downto 0);
            ACC_OUT : out STD_LOGIC_VECTOR(7 downto 0);
            Z_OUT   : out STD_LOGIC
        );
    end component;

    signal pc_signal       : STD_LOGIC_VECTOR(3 downto 0);
    signal instruction     : STD_LOGIC_VECTOR(11 downto 0);
    signal opcode_signal   : STD_LOGIC_VECTOR(3 downto 0);
    signal operand_signal  : STD_LOGIC_VECTOR(7 downto 0);

    signal alu_sel_signal  : STD_LOGIC_VECTOR(2 downto 0);
    signal acc_load_signal : STD_LOGIC;
    signal z_load_signal   : STD_LOGIC;
    signal pc_enable_signal: STD_LOGIC;

    signal acc_signal      : STD_LOGIC_VECTOR(7 downto 0);
    signal alu_result      : STD_LOGIC_VECTOR(7 downto 0);
    signal z_signal        : STD_LOGIC;

begin

    opcode_signal  <= instruction(11 downto 8);
    operand_signal <= instruction(7 downto 0);

    PC_UNIT: counter
        port map (
            CLK    => CLK,
            RESET  => RESET,
            PC_OUT => pc_signal
        );

    ROM_UNIT: rom
        port map (
            ADDR  => pc_signal,
            INSTR => instruction
        );

    CONTROL_INSTANCE: control_unit
        port map (
            OPCODE    => opcode_signal,
            ALU_SEL   => alu_sel_signal,
            ACC_LOAD  => acc_load_signal,
            Z_LOAD    => z_load_signal,
            PC_ENABLE => pc_enable_signal
        );

    ALU_UNIT: alu
        port map (
            ACC_IN  => acc_signal,
            OPERAND => operand_signal,
            ALU_SEL => alu_sel_signal,
            RESULT  => alu_result
        );

    ACC_UNIT: accu_reg
        port map (
            CLK     => CLK,
            RESET   => RESET,
            LOAD    => acc_load_signal,
            DATA_IN => alu_result,
            ACC_OUT => acc_signal,
            Z_OUT   => z_signal
        );

    Q      <= acc_signal;
    Z      <= z_signal;
    PC_OUT <= pc_signal;

end Structural;