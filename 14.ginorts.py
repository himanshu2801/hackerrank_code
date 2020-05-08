"""
Link of the question...
https://www.hackerrank.com/challenges/ginorts/problem
Solution...
"""
s=input()
lower="abcdefghijklmnopqrstuvwxyz"
upper="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
digit="1234567890"
l=l1=l2=''
for i in s:
    if i in lower:
        l=l+i
    elif i in upper:
        l1=l1+i
    else:
        l2=l2+i
l = ''.join(sorted(l))
l1 = ''.join(sorted(l1))
l3=''
l4=''

for i in l2:
    if int(i)%2==0:
        l3=l3+i
    else:
        l4=l4+i
l3 = ''.join(sorted(l3))
l4 = ''.join(sorted(l4))
print(l+l1+l4+l3)
