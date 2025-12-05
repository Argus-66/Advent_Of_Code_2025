#!/bin/bash
# Build script for Advent of Code solutions

if [ $# -eq 0 ]; then
    echo "Usage: ./build.sh <day_number>"
    echo "Example: ./build.sh 1"
    exit 1
fi

DAY=$(printf "day%02d" $1)

if [ ! -d "$DAY" ]; then
    echo "Error: Directory $DAY does not exist"
    exit 1
fi

if [ ! -f "$DAY/solution.cpp" ]; then
    echo "Error: $DAY/solution.cpp does not exist"
    exit 1
fi

echo "Building $DAY..."
g++ -std=c++17 -O2 -Wall -Wextra "$DAY/solution.cpp" -o "$DAY/solution"

if [ $? -eq 0 ]; then
    echo "✓ Build successful!"
    echo "Run with: ./$DAY/solution $DAY/input.txt"
else
    echo "✗ Build failed"
    exit 1
fi
