#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gradingStudents' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY grades as parameter.
#

def gradingStudents(grades):
    result = []
    for grade in grades:
        # A grade less than 38 never rounds up to a passing 40
        # The rounding condition (diff < 3) is equivalent to (grade % 5 >= 3)
        if grade >= 38 and grade % 5 >= 3:
            result.append(grade + (5 - (grade % 5)))
        else:
            result.append(grade)
    return result

# Standard boilerplate to handle input and output
if __name__ == '__main__':
    import sys
    
    # Read all input lines
    input_data = sys.stdin.read().split()
    if input_data:
        n = int(input_data[0])
        grades = [int(input_data[i]) for i in range(1, n + 1)]
        
        # Get the rounded results
        result = gradingStudents(grades)
        
        # Print each result on a new line (stdout)
        print('\n'.join(map(str, result)))
