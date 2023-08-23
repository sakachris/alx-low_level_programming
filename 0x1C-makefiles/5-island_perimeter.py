#!/usr/bin/python3
"""
module for the Island Perimeter function
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0
    ones = 0

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                if j > 0 and grid[i][j-1] == 1:
                    ones += 1
                if j < columns-1 and grid[i][j+1] == 1:
                    ones += 1
                if i > 0 and grid[i-1][j] == 1:
                    ones += 1
                if i < rows-1 and grid[i+1][j] == 1:
                    ones += 1
            if ones == 3:
                perimeter += 1
            elif ones == 2:
                perimeter += 2
            elif ones == 1:
                perimeter += 3
            ones = 0
    return perimeter
