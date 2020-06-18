"""
link of the question...
https://www.hackerrank.com/challenges/game-with-cells/problem
Solution...
"""
#!/bin/python3

import os
import sys
import math
#
# Complete the gameWithCells function below.
#
def gameWithCells(n, m):
    return math.ceil(n/2)*math.ceil(m/2)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    result = gameWithCells(n, m)

    fptr.write(str(result) + '\n')

    fptr.close()
