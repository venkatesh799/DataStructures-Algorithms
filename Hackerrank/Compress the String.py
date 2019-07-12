'''
You are given a string S. Suppose a character 'c' occurs consecutively X times in the string. Replace these consecutive occurrences 
of the character 'c' with (X,c)  in the string.

For a better understanding of the problem, check the explanation.

Sample Input
1222311
Sample Output
(1, 1) (3, 2) (1, 3) (2, 1)
'''

S=input()
i=1
a=[]
count=1
while i<len(S):
    if S[i]==S[i-1]:
        count+=1
        i+=1
    else:
        a.append((count,int(S[i-1])))
        i+=1
        count=1
a.append((count,int(S[i-1])))
for i in a:
    print(i,end=' ')
