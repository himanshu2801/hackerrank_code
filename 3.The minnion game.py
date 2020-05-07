"""

LINK OF THE QUESTION...
https://www.hackerrank.com/challenges/the-minion-game/problem

Solution...
"""
def minion_game(str1):
    vowel="AIOUE"
    score1=0
    score2=0
    for i in range(len(str1)):
        if str1[i] not in vowel:
            score1=score1+len(str1)-i
        else:
            score2=score2+len(str1)-i
    if score1>score2:
        print("Stuart",score1)
    elif score1<score2:
        print("Kevin",score2)
    else:
        print("Draw")

