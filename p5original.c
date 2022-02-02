#include <stdio.h>

float square_Root(float n);
float input();
void output(float x, float y, float z,float result1,float result2, float result3);

int main()
{
  float a,b,c;
  a = input();
  b = input();
  c = input();

  float a1,b1,c1;
  a1 = square_Root(a);
  b1 = square_Root(b);
  c1 = square_Root(c);

  output(a,b,c,a1,b1,c1);

}

float input()
{
    float x;
    printf("Enter number = ");
    scanf("%f", &x);
    return x;
}


//square root function
float square_Root(float n)
{
  float x = n;
  float y = 1.0;

  if ( x < 0 )
  {
    printf ("Negative argument to square Root.\n");
    x = -1.0;
  }

  else
  {
    while (x > y)
    {
      x = (x + y) / 2;
      y = n / x;
    }
  }

  return x;
}

void output(float x, float y, float z, float result1, float result2, float result3)
{
    printf("Square Root of %.2f is %.2f\n", x, result1);
    printf("Square Root of %.2f is %.2f\n", y, result2);
    printf("Square Root of %.2f is %.2f\n", z, result3);
}
