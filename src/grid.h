#pragma once // this header is included only once to avoid duplicate units
#include <vector>
#include "raylib.h"

class Grid
{
public:
    Grid(); // constructor
    void Initialize();
    void Print();
    void Draw();
    int grid[20][10]; // 2D array for grid

private:
    std::vector<Color> GetCellColors();
    int numRows;
    int numCols;
    int cellSize;

    std::vector<Color> colors;
};