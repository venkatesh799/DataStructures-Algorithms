# Problem :  https://www.hackerrank.com/challenges/merge-the-tools/problem

from collections import OrderedDict
def merge_the_tools(string, k):
    # your code goes here
    for x in range(0, len(string), k):
        print(''.join(OrderedDict.fromkeys(string[x:x+k])))
if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
    
    
    
# Python Dictionary fromkeys()
# The fromkeys() method creates a new dictionary from the given sequence of elements with a value provided by the user.

# The syntax of fromkeys() method is:

# dictionary.fromkeys(sequence[, value])
# fromkeys() Parameters
# fromkeys() method takes two parameters:

# sequence - sequence of elements which is to be used as keys for the new dictionary
# value (Optional) - value which is set to each each element of the dictionary
# Return value from fromkeys()
# fromkeys() method returns a new dictionary with the given sequence of elements as the keys of the dictionary.

# If the value argument is set, each element of the newly created dictionary is set to the provided value.
