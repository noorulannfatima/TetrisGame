#include "grid.h"
#include<iostream>

Grid :: Grid(){
    numRows = 20;
    numColumns = 10;
    cellSize = 30;
    Initialize(); // constructor
    colors = GetCellColor();
}

void Grid :: Initialize(){
    for(int row = 0; row < numRows; row++){
        for(int column = 0; column < numColumns; column++){
            grid[row][column] = 0;
        }
    }
}
// This method is useful when we want to see the state of our grid
void Grid :: Print(){
    for(int row = 0; row < numRows; row++){
        for(int column = 0; column < numColumns; column++){
            std::cout << grid[row][column] << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<Color> Grid::GetCellColor(){
    Color darkGrey = {26, 31, 40, 255};
    Color green = {47, 230, 23, 255};
    Color red = {232, 18, 18, 255};
    Color orange = {226, 116, 17, 255};
    Color yellow = {237, 234, 4, 255};
    Color purple = {166, 0, 247, 255};
    Color cyan = {21, 204, 209, 255};
    Color blue = {13, 64, 216, 255};
    Color lightBlue = {59, 85, 162, 255};
    Color darkBlue = {44, 44, 127, 255};

    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}
// Iterates through each cell in the grid and assign values of that cell to variable "cellValue"
void Grid::Draw()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int column = 0; column < numColumns; column++)
        {
            int cellValue = grid[row][column];
            DrawRectangle(column * cellSize + 1, row * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
}

