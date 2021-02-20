#!/usr/bin/python3
'''task 5, perimetro de una isla'''


def neighbours(grid, row, col):
    '''sum neighbours'''
    height = len(grid)
    width = len(grid[0])
    total = 0

    if col > 0:
        total += grid[row][col - 1]
    if row > 0:
        total += grid[row - 1][col]
    if col + 1 < width:
        total += grid[row][col + 1]
    if row + 1 < height:
        total += grid[row + 1][col]
    return total


def island_perimeter(grid):
    '''find permiter'''
    perimeter = 0
    height = len(grid)
    width = len(grid[0])

    for row in range(height):
        for col in range(width):
            if (grid[row][col]):
                perimeter = perimeter + 4 - neighbours(grid, row, col)
    return (perimeter)
