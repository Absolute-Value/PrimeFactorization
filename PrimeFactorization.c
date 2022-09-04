#include <stdio.h>

void PrimeFactorization(num)
{
  int i = 2;
  printf("[");
  while (i != num)
  {
    if (num % i == 0)
    {
      printf("%d, ", i);
      num /= i;
      i = 2;
    }
    else
    {
      i++;
    }
  }
  printf("%d]\n", num);
}

int main()
{
  int num;
  scanf("%d", &num);
  PrimeFactorization(num);
}