from collections import Counter
a=input()   #cdes
b=input()    #fdea
c1=Counter(a)     #Counter({'s': 1, 'd': 1, 'c': 1, 'e': 1})
c2=Counter(b)            #Counter({'d': 1, 'f': 1, 'e': 1, 'a': 1})
c=c1-c2               #Counter({'s': 1, 'c': 1})
d=c2-c1      #Counter({'f': 1, 'a': 1})
e=c+d         #Counter({'s': 1, 'c': 1, 'f': 1, 'a': 1})
print(len(list(e.elements()))) #4
