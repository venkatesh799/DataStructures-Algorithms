#-----------------------------------------------------------------------
#         https://www.hackerrank.com/challenges/2d-array/problem       |
#-----------------------------------------------------------------------

a=[]
for x in range(6):
    a.append(list(map(int,input().split())))
maxi_sum=-63
for i in range(len(a)-2):
    for j in range(len(a[0])-2):
        current_sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]
        maxi_sum=max(current_sum,maxi_sum)
print(maxi_sum)
