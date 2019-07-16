'''
Lilah has a string, S, of lowercase English letters that she repeated infinitely many times.

Given an integer,N , find and print the number of letter a's in the first N  letters of Lilah's infinite string.

For example, if the string S='abcac' and  N=10, the substring we consider is'abcacabcac' , the first  10 characters of her 
infinite string. There are 4 occurrences of a in the substring.

Sample Input 
aba
10
Sample Output 
7
'''

s=input()
n=int(input())
c_s=s.count('a')
l=len(s)
parts=n//l
c_s=c_s*parts
x=parts*l
i=0
while x < n:
    if s[i] == 'a':
        c_s+=1
        x+=1
    else:
        x+=1
    i+=1
print(c_s)
