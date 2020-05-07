"""
LINK OF THE QUESTION...
https://www.hackerrank.com/challenges/capitalize/problem
SOLUTION...
"""
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(str1):
    lst=list(str1.split(" "))
    for i in range(len(lst)):
        if (lst[i]!="") and (lst[i][0]>='a' and lst[i][0]<='z'):
            lst1=list(lst[i])
            lst1[0]=lst1[0].swapcase()
            lst[i]="".join(lst1)
    str1=" ".join(lst)
    return str1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
