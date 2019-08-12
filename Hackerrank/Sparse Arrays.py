#  Problem : https://www.hackerrank.com/challenges/sparse-arrays/problem

String_size=int(input())
Strings=[input() for x in range(String_size)]
Querie_size=int(input())
Queries=[input() for x in range(Querie_size)]
count=0
for x in Queries:
   print(Strings.count(x))
 
