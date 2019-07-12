'''
You are given N words. Some words may repeat. For each word, output its number of occurrences.
The output order should correspond with the input order of appearance of the word. See the sample input/output for clarification.
 
Sample Input:
4
bcdef
abcdefg
bcde
bcdef

Sample Output:
3
2 1 1
'''

n=int(input())
d={}
for x in range(n):
    s=input()
    if s in d:
        d[s]+=1
    else:
        d[s]=1
print(len(d))
for x in d.keys():
    print(d[x],end=" ")              

