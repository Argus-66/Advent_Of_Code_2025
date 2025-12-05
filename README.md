# Advent of Code 2025 - C++

Solving Advent of Code puzzles in C++ for fun and learning! 🎄

## How to Use

1. Each day has its own directory (e.g., `day01/`, `day02/`, etc.)
2. Each day contains:
   - `part1.cpp` - Part 1 solution
   - `part2.cpp` - Part 2 solution
   - `input.txt` - Your puzzle input (download from adventofcode.com)

## Building and Running

### Using the build script (recommended):
```bash
./build.sh 1          # Build day 1
./day01/part1 day01/input.txt
./day01/part2 day01/input.txt
```

### Using Make:
```bash
make day01            # Build day 1
./day01/part1 day01/input.txt
./day01/part2 day01/input.txt
```

### Direct compilation:
```bash
g++ -std=c++17 -O2 day01/part1.cpp -o day01/part1
g++ -std=c++17 -O2 day01/part2.cpp -o day01/part2
./day01/part1 day01/input.txt
./day01/part2 day01/input.txt
```

## Quick Start

1. Go to https://adventofcode.com/2025
2. Read the day's problem
3. Copy your input to `dayXX/input.txt`
4. Write your solution in `dayXX/part1.cpp`
5. Compile and run!
6. After solving Part 1, implement Part 2 in `dayXX/part2.cpp`

## Progress

- ⭐⭐ Day 1: Secret Entrance
