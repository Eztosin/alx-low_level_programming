#!/usr/bin/env python3

def island_perimeter(grid):
    """a function that returns the perimeter
    of the island described in grid:"""
    grid_cells = [(1, 0), (-1, 0), (0, 1), (0, -1)]

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                for dx, dy in grid_cells:
                    
