#! /usr/bin/env python3

def PrimeFactorization(num):
    factors = []
    i = 2
    while(i != num):
        if num % i == 0:
            factors.append(i)
            num = int( num / i )
            i = 2
        else:
            i += 1
    factors.append(num)
    return factors

num = int(input("素因数分解したい整数を入力してください："))
factors_result = PrimeFactorization(num)
print(factors_result)