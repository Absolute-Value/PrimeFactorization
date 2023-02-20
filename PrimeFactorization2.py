#! /usr/bin/env python3

import math

n = int(input())
factors = []

for i in range(2, int(math.sqrt(n))+1):
  while (n % i == 0):
    factors.append(str(i))
    n = n // i
    
if n != 1:
  factors.append(str(n))
  
print(' '.join(factors))