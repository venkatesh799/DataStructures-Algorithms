'''
Title     : Zipped!
Subdomain : Built-Ins
Domain    : Python
Author    : Ahmedur Rahman Shovon
Created   : 15 July 2016
Problem   : https://www.hackerrank.com/challenges/zipped/problem
'''

subjects,students=map(int,input().split())
l=[]
for x in range(students):
    marks=[]
    marks=list(map(float,input().split()))
    l.append(marks)
ans=[sum(i)/students for i in zip(*l)]
for x in ans:
    print(x)
