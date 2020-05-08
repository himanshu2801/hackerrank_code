"""
Link of the question...
https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem
Soltuon...
"""
if __name__ == '__main__':
    list=[]
    n = int(input())
    list=input()
    n_list=list.split()
    for num in n_list:
        n_list = int(num)
    n_list.remove(max(n_list))
    print(max(n_list))
