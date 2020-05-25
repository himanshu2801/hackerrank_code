"""
Link of the Question...
https://www.hackerrank.com/challenges/find-a-string/problem
Solution...
"""
def count_substring(string, sub_string):
    count=0
    l=len(sub_string)
    for i in range(len(string)-l +1):
        if string[i:i+l]==sub_string:
            count=count+1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
