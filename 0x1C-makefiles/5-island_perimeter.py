#!/usr/bin/python3
""" a funtion that returns a perimeter of the island described in grid """


def island_perimeter(grid):
    """ returns the perimiter of an island

    grid is a list of integers
    0 rep.. water zone
    1 rep... a land zone
    1 cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, & there is one island (or nothing)
    The island doesn’t have “lakes”
    (water inside that isn’t connected to the water around the island).
    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return ((size * 4) - (edges * 2))
