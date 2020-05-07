"""
Question...
You are given an integer, . Your task is to print an alphabet rangoli of size . (Rangoli is a form of Indian folk art based on creation of patterns.)

Different sizes of alphabet rangoli are shown below:

#size 3

----c----
--c-b-c--
c-b-a-b-c
--c-b-c--
----c----

#size 5

--------e--------
------e-d-e------
----e-d-c-d-e----
--e-d-c-b-c-d-e--
e-d-c-b-a-b-c-d-e
--e-d-c-b-c-d-e--
----e-d-c-d-e----
------e-d-e------
--------e--------
Input Format

Only one line of input containing N, the size of the rangoli.
Solution...
"""
import string
def print_rangoli(size):
    str1 =string.ascii_lowercase
    n = size
    l = []
    for i in range(n):
        s="-".join(str1[i:n])
        l.append(s[::-1]+s[1:])

    for i in range(n-1,0,-1):
        print(l[i].center(len(l[0]), "-"))
    for i in range(n):
        print(l[i].center(len(l[0]), "-"))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
