'''
Given two strings, determine if they share a common substring. A substring may be as small as one character.
For example, the words "a", "and", "art" share the common substring a . The words "be" and "cat" do not share a substring.

Sample Input :
2
hello
world
hi
world
Sample Output :
YES
NO
'''
def twoStrings(s1, s2):
    a1="YES"
    a2="NO"
    k=set(s1).intersection(s2)
    if len(k) > 0:
        return a1
    else:
        return a2
n=int(input())
for x in range(n):
    s1=input().strip()
    s2=input().strip()
    s1=list(s1)
    s2=list(s2)
    res=twoStrings(s1,s2)
    print(res)
