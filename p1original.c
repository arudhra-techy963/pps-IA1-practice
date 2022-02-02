#include <stdio.h>
#include <stdlib.h>


int input();
int add(int x, int y, int* result);
void output(int x, int y, int result);

int main()
{
    int a,b;
    a = input();
    b = input();

    int sum;
    add(a, b, &sum);

    output(a,b, sum);

    return 0;

}

int input(int x)
{
    printf("Enter number = ");
    scanf("%d", &x);

    return x;
}

int add(int x, int y, int* result)
{
    *result = x + y;

    return *result ;
}

void output(int x, int y, int result)
{
    printf("\nThe answer: \n%d + %d = %d",x,y,result);
}
