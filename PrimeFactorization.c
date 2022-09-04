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
  printf("素因数分解したい整数を入力してください：");
  scanf("%d", &num);
  PrimeFactorization(num);
}