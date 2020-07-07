"""
Link of the question...
https://www.hackerrank.com/challenges/best-divisor/problem
Solution...
"""
#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    lst,max,sum,temp1=[],0,0,0
    for i in range(1,n+1):
        if n%i==0:
            lst.append(i)
    for i in range(len(lst)):
        temp=lst[i]
        while temp!=0:
            sum=sum+temp%10
            temp=temp//10
        if sum>max:
            max=sum
            temp1=lst[i]
        sum=0
    print(temp1)
        
