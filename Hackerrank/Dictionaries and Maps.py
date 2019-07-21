#Dictionaries and Maps
#------------------------------------------------------------------------------
#   https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem     |
#------------------------------------------------------------------------------


n=int(input())
phone={}
for x in range(n):
    name,number=input().split()
    phone[name]=number
search=[]
while True:
    try:
        line=input()
    except EOFError:
        break
    search.append(line)
for x in search:
    if x in phone.keys():
        print("{0}={1}".format(x,phone.get(x)))
    else:
         print("Not found")
