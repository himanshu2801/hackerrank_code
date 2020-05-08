"""
Link of the question...
https://www.hackerrank.com/challenges/find-angle/problem
Solution...
"""
# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
p=int(input())
b=int(input())
x=math.atan2(p,b)
x=math.degrees(x)
x=round(x)
x=str(x)
print(x+"°")
