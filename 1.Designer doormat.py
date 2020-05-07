"""
Question....
Mr. Vincent works in a door mat manufacturing company. One day, he designed a new door mat with the following specifications:

Mat size must be N X M. (N is an odd natural number, and  is  times .)
The design should have 'WELCOME' written in the center.
The design pattern should only use |, . and - characters.

  Size: 7 x 21 
    ---------.|.---------
    ------.|..|..|.------
    ---.|..|..|..|..|.---
    -------WELCOME-------
    ---.|..|..|..|..|.---
    ------.|..|..|.------
    ---------.|.---------
    
    Input Format

A single line containing the space separated values of  and .

Constraints
5 < N <101
15< M <303
Output Format

Output the design pattern.
Solution...
"""
x,y=input().split()
n=int(x)
m=int(y)
lst=[]
str1=".|."
l=0
for i in range (n//2+2):
    if(i<n//2+1):
        s=""
        l=2*i-1
        for j in range(0,l):
            s=s+str1
        l=0    
    elif (i==n//2+1):
        s="WELCOME"
    lst.append(s)
for i in range(1,n//2+2):
    print(lst[i].center(m, "-"))
for i in range(n//2,0,-1):
    print(lst[i].center(m, "-"))

