#!/usr/bin/python3
"""Defines island_perimeter function"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    Arguments:
        grid: A list of list of integers:
            - 0 represents a water zone
            - 1 represents a land zone
            - One cell is a square with side length 1
            - Grid cells are connected horizontally/vertically
                (not diagonaly).
            - Grid is rectangular, width and height don’t exceed 100
    """
    g_width = len(grid[0])
    g_height = len(grid)
    edges = 0
    size = 0

    for i in range(g_height):
        for j in range(g_width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
