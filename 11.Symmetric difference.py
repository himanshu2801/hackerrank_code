"""
Link of the question...
https://www.hackerrank.com/challenges/symmetric-difference/problem
Solution...
"""
 # Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
lst = [int(i) for i in input().split()]
m=int(input())
lst1 = [int(i) for i in input().split()]
set1=set(lst)
set2=set(lst1) 
set3=set1.difference(set2)
set2=set2.difference(set1)
set2=set2.union(set3)
for i in sorted(set2):
    print(i)

