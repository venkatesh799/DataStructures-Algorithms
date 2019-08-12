 # problem :   https://www.hackerrank.com/challenges/minimum-swaps-2/problem

n=int(input())
l=list(map(int,input().split()))
swaps=0
for x in range(n-1):
    while l[x] != x+1:
        temp=l[l[x]-1]
        l[l[x]-1]=l[x]
        l[x]=temp
        swaps+=1
print(swaps)
