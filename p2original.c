#include <stdio.h>
#include <stdlib.h>

int input();
int largest(int x, int y, int z);
void output(int x, int y, int z, int result);

int main()
{
    int a = input();
    int b = input();
    int c = input();

    int large_no = largest(a,b,c);

    output(a,b,c,large_no);

    return 0;

}

int input(int x)
{
    printf("Enter number = ");
    scanf("%d", &x);
    return x;
}

int largest(int x, int y, int z)
{
    int large;

    if (x >= y && x >= z)
        large = x;

    if (y >= x && y >= z)
        large = y;

    if (z >= x && z >= y)
        large = z;

    return large;
}

void output(int x, int y, int z, int result)
{
    printf("\nThe Largest Number among %d, %d, %d = %d\n",x,y,z,result);
}
