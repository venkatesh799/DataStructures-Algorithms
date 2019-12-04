'''
HackerRank : https://www.hackerrank.com/challenges/itertools-permutations/problem

You are given a string S.
Your task is to print all possible permutations of size N of the string in lexicographic sorted order.

'''

from itertools import permutations
s,n=map(str,input().split())
l=[]
for x in permutations(s,int(n)):
    y=''.join(x)
    l.append(y)
l.sort()
for x in l:
    print(x)


'''
Sample Input

HACK 2
Sample Output

AC
AH
AK
CA
CH
CK
HA
HC
HK
KA
KC
KH
'''
