'''

HackerRank : https://www.hackerrank.com/challenges/collections-counter/problem

Sample Input

10
2 3 4 5 6 8 7 6 5 18
6
6 55
6 45
6 55
4 40
18 60
10 50
Sample Output

200
Explanation

Customer 1: Purchased size 6 shoe for $55.
Customer 2: Purchased size 6 shoe for $45.
Customer 3: Size 6 no longer available, so no purchase.
Customer 4: Purchased size 4 shoe for $40.
Customer 5: Purchased size 18 shoe for $60.
Customer 6: Size 10 not available, so no purchase.

Total money = 55+45+40+60 = 200

'''

n1=int(input())
l1=list(map(int,input().split()))
n2=int(input())
price=0
l2=[]
for x in range(n2):
    a,b=map(int,input().split())
    t=(a,b)
    l2.append(t)
for x in range(len(l2)):
    if l2[x][0] in l1:
        l1.remove(l2[x][0])
        price+=l2[x][1]
print(price)
    
    
