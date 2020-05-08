"""
Link of the question...
https://www.hackerrank.com/challenges/compress-the-string/problem
Solution...
"""
str=input()
x=0
for i in str:
    for j in str:
        if i==j:
            x=x+1
            str=str.replace(i,"",1)
        elif i!=j:
            break
    if(x!=0):
        tup=(x,int(i))
        print (tup,end=" ")
    x=0
