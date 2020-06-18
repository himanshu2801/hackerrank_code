"""
link of the question...
https://www.hackerrank.com/challenges/connecting-towns/problem
solution...
"""
#!/bin/python3

import os
import sys
import math
#
# Complete the connectingTowns function below.
#
def connectingTowns(n, routes):
    mult=1
    for x in routes:
        mult=(mult*x)%1234567
    return mult

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        routes = list(map(int, input().rstrip().split()))

        result = connectingTowns(n, routes)

        fptr.write(str(result) + '\n')

    fptr.close()
