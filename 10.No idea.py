"""
Link of the question...
https://www.hackerrank.com/challenges/no-idea/problem
Solution...
"""
x,y=input().split()
lst = [int(i) for i in input().split()]
lst1 =[int(i) for i in input().split()]
lst2=[int(i) for i in input().split()]
set1=set(lst1)
set2=set(lst2)
l=0
for i in lst:
    if i in set1:
        l=l+1
    if i in set2:
        l=l-1    
print(l)
