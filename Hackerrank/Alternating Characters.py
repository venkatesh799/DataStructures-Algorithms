'''
You are given a string containing characters A  and B only. Your task is to change it into a string such that 
there are no matching adjacent characters. To do this, you are allowed to delete zero or more characters in the string.

Your task is to find the minimum number of required deletions.

For example, given the string S=AABAAB, remove an A at positions 0 and 3 to make S=ABAB in 2 deletions.

Sample Input
5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB
Sample Output
3
4
0
0
4
'''
def ans(k):
    l=list(k)
    a=[]
    for x in range(len(l)-1):
        if l[x] == l[x+1]:
            a.append(x)
    print(len(a))
n=int(input())
q=[]
for x in range(n):
    q.append(input())
for x in q:
    ans(x)
