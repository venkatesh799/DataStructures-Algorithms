'''
You and Fredrick are good friends. Yesterday, Fredrick received N credit cards from ABCD Bank. He wants to verify whether his credit card numbers are valid or not. You happen to be great at regex so he is asking for your help!

A valid credit card from ABCD Bank has the following characteristics: 

► It must start with a 4,5  or 6 . 
► It must contain exactly 16 digits. 
► It must only consist of digits (-). 
► It may have digits in groups of 4, separated by one hyphen "-". 
► It must NOT use any other separator like ' ' , '_', etc. 
► It must NOT have 4 or more consecutive repeated digits.
link : https://www.hackerrank.com/challenges/validating-credit-card-number/problem

'''
def func(l):
    #counting for 4 consecutive digits
    leave=True
    k=l.find("-")  # card contains more ' - '  > 4
    k1=l.find(" ")  # counting ' '
    if k > 5 or k1 > 5:
        leave=False
    else:
        l=l.replace("-","")
        l=l.replace(" ","")
        count=1
        leave=True
    for x in range(len(l)-1):
        if l[x] == l[x+1]:
            count=count+1
            if count >= 4:
                leave=False
        else:
            count=1
    return leave
cards=[]
l=['1','2','3','7','8','9'] # a card number do not start with this list
n=int(input())              # no.of cards
for x in range(n):
    card_number=input()
    cards.append(card_number) # storing cards into a list
for x in cards:
    s=func(x)               # checking whether card contains any 4 consecutive  numbers
    if x[0] in l or '_' in x or not s:
        print("Invalid")
    elif len(x) > 17:           #if card number length contains 16 .it may include - ,' '
        if "-" in x:
            s=x
            s=s.split('-',4)        #spliting one vard number into sub parts to check every group contains only 4 digits
            for k in s:
                if len(k) > 4:
                    print("Invalid")
                    break
                else:
                    print("Valid")
                    break
        else:
            print("Invalid")
    else:
        print("Valid")
