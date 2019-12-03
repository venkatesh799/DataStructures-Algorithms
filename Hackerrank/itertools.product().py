 '''



 Hackerrank :https://www.hackerrank.com/challenges/itertools-product/problem



You are given two lists A and B. Your task is to compute their cartesian product X.



Example



A = [1, 2]

B = [3, 4]



AxB = [(1, 3), (1, 4), (2, 3), (2, 4)]  '''



from itertools import product

a=list(map(int,input().split()))

b=list(map(int,input().split()))

for x in product(a,b):

    print(x,end=" ")
