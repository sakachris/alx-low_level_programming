#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]

    grid2 = [
        [0, 1, 0, 0],
        [1, 1, 1, 0],
        [0, 1, 0, 0],
        [1, 1, 0, 0]
    ]

    grid3 = [
        [1, 1, 1],
        [1, 1, 1],
        [1, 1, 1]
    ]

    grid4 = [[1]]

    print(island_perimeter(grid))
    print(island_perimeter(grid2))
    print(island_perimeter(grid3))
    print(island_perimeter(grid4))
