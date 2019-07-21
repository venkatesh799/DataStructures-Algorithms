#-----------------------------------------------------
# Problem Statement
#  https://www.hackerrank.com/challenges/ctci-ransom-note/problem

from collections import Counter 
import math
import os
import random
import re
import sys

# Complete the checkMagazine function below.
def checkMagazine(magazine, note):
    #magazine=magazine.split()
    #note=note.split()
    d1=Counter(magazine)
    d2=Counter(note)
    s1=d2-d1
    if len(s1) == 0:
        print("Yes")
    else:
        print("No")


if __name__ == '__main__':
    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    magazine = input().rstrip().split()

    note = input().rstrip().split()

    checkMagazine(magazine, note)
