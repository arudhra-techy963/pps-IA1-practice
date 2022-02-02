#include<stdio.h>

typedef struct _complex
{
  float real;
  float img;
}cmplx;

cmplx add(cmplx a, cmplx b);
cmplx add_n_cmplx(int n, cmplx c[n]);
cmplx input_cmplx();
void input_n_cmplx(int n, cmplx c[n]);
int get_n();
void output(int n, cmplx c[n], cmplx result);

int main()
{
  int n = get_n();

  cmplx c[n], res;
  input_n_cmplx(n, c);

  res = add_n_cmplx(n, c);

  output(n, c, res);

  return 0;
}

int get_n()
{
  int n;

  printf("Enter the number of cmplx numbers: ");
  scanf("%d", &n);

  return n;
}

cmplx input_cmplx()
{
    cmplx c;
    printf("\nEnter the real part: ");
    scanf("%f", &c.real);

    printf("Enter the imaginary part : ");
    scanf("%f", &c.img);

    return c;
}

void input_n_cmplx(int n, cmplx c[n])
{
    for(int i=0; i<n; i++)
    c[i] = input_cmplx();
}

cmplx add(cmplx a, cmplx b)
{
    cmplx res;
    res.real = a.real + b.real;
    res.img = a.img + b.img;
    return res;
}

cmplx add_n_cmplx(int n, cmplx c[n])
{
  cmplx res;
  res.img = 0;
  res.real = 0;

  for(int i=0; i<n; i++)
    res = add(res, c[i]);

  return res;
}

void output(int n, cmplx c[n], cmplx result)
{
  if(n==1)
  {
    printf("\nThe complex Number is = %0.2f + %0.2fi\n",c[0].real, c[0].img);
    printf("Hence,the answer is %0.2f + %0.2fi\n",result.real, result.img);
  }

  else
  {
    printf("\nThe complex numbers are: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%0.2f + %0.2fi\n", c[i].real, c[i].img);
    }

    printf("\nHence, the result= %0.2f + %0.2fi",result.real, result.img);
  }
}
