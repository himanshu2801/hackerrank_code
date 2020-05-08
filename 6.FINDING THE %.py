"""
LINK OF THE QUESTION...
https://www.hackerrank.com/challenges/finding-the-percentage/problem
SOLUTION...
"""
n=int(input())
lst=[]
lst1=[]
for i in range(n):
    ele=input().split()
    lst.append(ele)
str=input()
l=0
for i in range(n):
    if(str==lst[i][0]):
        l=i
le=len(lst[i])
sum=0
for i in range(1,le):
    sum=sum+float(lst[l][i])
avrg=sum/(le-1)
print("%.2f" % avrg)

