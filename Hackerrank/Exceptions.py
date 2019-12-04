'''
HackerRank : https://www.hackerrank.com/challenges/exceptions/problem

Sample Input

3
1 0
2 $
3 1
Sample Output

Error Code: integer division or modulo by zero
Error Code: invalid literal for int() with base 10: '$'
3
'''
n=int(input())
i=0
while i < n:
    a,b=map(str,input().split())
    try:
        print(int(a)//int(b))
    except ValueError:
        if a.isnumeric():
            print("Error Code: invalid literal for int() with base 10: '{0}'".format(b))
        else:
            print("Error Code: invalid literal for int() with base 10: '{0}'".format(a))
    except ZeroDivisionError:
        print("Error Code: integer division or modulo by zero")
    i+=1
