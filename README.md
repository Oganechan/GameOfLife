# Game Of Life

![Language](https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=cplusplus) 
![Platform](https://img.shields.io/badge/Platform-Linux_only-red?style=for-the-badge&logo=linux)
![Interface](https://img.shields.io/badge/Interface-Console-black?style=for-the-badge)
![Version](https://img.shields.io/badge/Verion-0.1.0-green?style=for-the-badge)

## Description

**The Game of Life**, also known as **Conway's Game of Life** or simply **Life**, is a cellular automaton devised by the British mathematician John Horton Conway in 1970. It is a zero-player game, meaning that its evolution is determined by its initial state, requiring no further input. One interacts with the Game of Life by creating an initial configuration and observing how it evolves. It is Turing complete and can simulate a universal constructor or any other Turing machine.

from [wiki](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life)

## Basic Rules

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

# Roadmap

![](https://img.shields.io/badge/✓-0.1.0-green?style=for-the-badge)
![](https://img.shields.io/badge/✕-0.2.0-red?style=for-the-badge)
![](https://img.shields.io/badge/✕-0.3.0-red?style=for-the-badge)
![](https://img.shields.io/badge/✕-0.4.0-red?style=for-the-badge)
![](https://img.shields.io/badge/✕-0.5.0-red?style=for-the-badge)
![](https://img.shields.io/badge/✕-1.0.0-red?style=for-the-badge)

## Version 0.1.0 - Start Point

- [✓] Basic Conway's Game of Life implementation
- [✓] Random initialization
- [✓] Simple console visualization
- [✓] Toroidal world geometry

## Version 0.2.0 - Keybinding

- [✕] Pause/Resume functionality (Spacebar)
- [✕] Step-by-step mode (Enter)
- [✕] Speed control (+/- keys)

## Version 0.3.0 - Content Creation Tools

- [✕] Interactive cell painting with cursor
- [✕] Custom and standard starting configurations
- [✕] Save/Load configurations

## Version 0.4.0 - Saving and Analysis

- [✕] Real-time statistics (generation, FPS, etc.)
- [✕] Save simulation history
- [✕] Export to image format

## Version 0.5.0 - More Opportunities

- [✕] Config support
- [✕] Custom rule system (B/S notation)
- [✕] Adjustable grid size and movement in space
- [✕] Color scheme settings

## Version 1.0.0 - Full Launch

- [✕] Cross-platform support
- [✕] Performance optimizations
- [✕] Comprehensive documentation
