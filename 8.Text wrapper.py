"""
link of the Question...
https://www.hackerrank.com/challenges/text-wrap/problem
Solution...
"""
import textwrap

def wrap(string, max_width):
    value=string
    wrapper = textwrap.TextWrapper(width=max_width) 
    word_list = wrapper.wrap(text=value)
    for line in word_list:
        line1=word_list
    s = "\n".join(line1) 
    return s

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
