library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity rom is
    Port (
        ADDR  : in  STD_LOGIC_VECTOR(3 downto 0);
        INSTR : out STD_LOGIC_VECTOR(11 downto 0)
    );
end rom;

architecture Behavioral of rom is

    type rom_type is array (0 to 15) of STD_LOGIC_VECTOR(11 downto 0);

    constant ROM : rom_type := (
        0  => x"180", 
        1  => x"900", 
        2  => x"310", 
        3  => x"20F", 
        4  => x"63F", 
        5  => x"207",
        6  => x"900",
        7  => x"000", 
        8  => x"000", 
        9  => x"000", 
        10 => x"000", 
        11 => x"000", 
        12 => x"000", 
        13 => x"000", 
        14 => x"000", 
        15 => x"000" 
    );

begin

    INSTR <= ROM(to_integer(unsigned(ADDR)));

end Behavioral;