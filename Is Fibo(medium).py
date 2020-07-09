"""
Link of the question...
https://www.hackerrank.com/challenges/is-fibo/problem?h_r=next-challenge&h_v=zen
Solution...
"""
#!/bin/python3

import os
import math
import sys

# Complete the solve function below.
def isPerfectSquare(x): 
    s = int(math.sqrt(x)) 
    return s*s == x
def solve(n):
    return isPerfectSquare(5*n*n + 4) or isPerfectSquare(5*n*n - 4) 

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = solve(n)
        if result==True:
            fptr.write("IsFibo" + '\n')
        else:
            fptr.write("IsNotFibo" + '\n')

    fptr.close()
