'''
Title     : Any or All
Subdomain : Built-Ins
Domain    : Python
Author    : Ahmedur Rahman Shovon
Created   : 15 July 2016
Problem   : https://www.hackerrank.com/challenges/any-or-all/problem

Task :
You are given a space separated list of integers. If all the integers are positive, 
then you need to check if any integer is a palindromic integer.

Sample Input
5
12 9 61 5 14 

Sample Output
True

Explanation
Condition 1: All the integers in the list are positive.
Condition 2: 5 is a palindromic integer.
'''

n=int(input())
l=list(map(int,input().split()))
l=sorted(l)
if l[0] < 0:
    print(False)
else:
    check=False
    for i in l:
        s=str(i)
        if s == s[::-1]:
            check = True
            break
    print(check)

