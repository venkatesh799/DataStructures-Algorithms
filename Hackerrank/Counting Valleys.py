'''
/**
 * 
 * Problem Statement-
 * [Counting Valleys](https://www.hackerrank.com/challenges/counting-valleys/problem) 
 * 
 */
'''


n=int(input())
s=input()
l=list(s)
alt=0
vc=0
for x in l:
    if x == 'U':
        alt+=1
        if alt == 0:
            vc+=1
    else:
        alt-=1
print(vc)
