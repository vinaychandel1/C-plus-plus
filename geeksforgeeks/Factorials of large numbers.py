#code
import math
import os
import random
import re
import sys

# Complete the extraLongFactorials function below.
def extraLongFactorials(n):
    return 1 if(n==1 or n==0) else n*extraLongFactorials(n-1);

if __name__ == '__main__':
    k=int(input())
    
    for i in range(0,k):
        n = int(input())
        print (extraLongFactorials(n))
