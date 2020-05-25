"""
Link of the Question...
https://www.hackerrank.com/challenges/minimum-swaps-2/problem
Solution...
"""
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    l=0
    for i in range(len(arr)-1):
        if i!=arr[i]-1:
            x=arr.index(i+1)
            arr[i],arr[x]=i+1,arr[i]
            l=l+1
    return l


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = minimumSwaps(arr)

    fptr.write(str(res) + '\n')

    fptr.close()
