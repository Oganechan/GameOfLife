# Game Of Life


## Description

**The Game of Life**, also known as **Conway's Game of Life** or simply **Life**, is a cellular automaton devised by the British mathematician John Horton Conway in 1970. It is a zero-player game, meaning that its evolution is determined by its initial state, requiring no further input. One interacts with the Game of Life by creating an initial configuration and observing how it evolves. It is Turing complete and can simulate a universal constructor or any other Turing machine.

from [wiki](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life)

## Rules

- Any live cell with fewer than two live neighbours dies, as if by underpopulation.
- Any live cell with two or three live neighbours lives on to the next generation.
- Any live cell with more than three live neighbours dies, as if by overpopulation.
- Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.

## Build Instructions

1. Clone the repository:
```bash
clone https://github.com/Oganechan/GameOfLife
cd ./GameOfLife
```
2. Configure with CMake and build:
```bash
mkdir build && cd build
cmake .. && make
```

## Output

The programm generates **Life** simulaation in Linux console $120\times30$ size
