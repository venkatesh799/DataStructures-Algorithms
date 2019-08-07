#-------------------------------------------------------------------------------------------------
#     https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem       #
#--------------------------------------------------------------------------------------------------

n=int(input())
l=input().split()
'''  
              it takes more complexity
              min_sum=100000000
              for x in range(len(l)):
                  for y in range(x+1,len(l)):
                      curr1=int(l[x])-int(l[y])
                      curr2=abs(curr1)
                      if curr2 < min_sum:
                          min_sum=curr2
              print(min_sum)
'''
min_sum=1000000
l.sort()
for x in range(len(l)):
    for y in range(x+1,len(l)):
        curr1=abs(int(l[x])-int(l[y]))
        if curr_sum > min_sum:
            break
        elif curr_sum < min_sum:
            min_sum=curr1
print(min_sum)

