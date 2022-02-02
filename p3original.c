#include <stdio.h>
#include <stdlib.h>

int input();
int summation(int n);
void output(int n, int sum);

int main()
{
    int n = input();
    int ans = summation(n);

    output(n, ans);
    //    sum = n*(n + 1)/2;

   return 0;
}

int input(int x)
{
    printf("Enter number n = ");
    scanf("%d", &x);
    return x;
}

int summation(int n)
{
  int i = 1;
  int sum = 0;
  while (i <= n)
    {
      sum += i;
      ++i;
    }
    return sum;
}

void output(int n, int sum)
{
    printf("Sum of %d numbers = %d", n, sum);
}
