"""
LINK OF THE QUESTION...
https://www.hackerrank.com/challenges/merge-the-tools/problem
Solution...
"""
def merge_the_tools(S, K):
    temp = []
    len_temp = 0
    for item in S:
        len_temp += 1
        if item not in temp:
            temp.append(item)
        if len_temp == K:
            print (''.join(temp))
            temp = []
            len_temp = 0
if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
