"""
Link of the question...
https://www.hackerrank.com/challenges/lowest-triangle/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
Solution...
"""
#!/bin/python3

import sys
import math

def lowestTriangle(base, area):
    return math.ceil((2*area)/base)

base, area = input().strip().split(' ')
base, area = [int(base), int(area)]
height = lowestTriangle(base, area)
print(height)
