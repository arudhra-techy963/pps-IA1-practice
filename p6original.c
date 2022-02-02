#include <stdio.h>
#include <stdlib.h>
#define size  30

void input(char a[], char b[]);
int cmpr(char a[], char b[]);
void output(char a[], char b[], int ans);

int main()
{
  char a[size], b[size];
  int ans;

  input(a, b);
  ans = cmpr(a, b);
  output(a, b, ans);

  return 0;
}

void input(char *a, char *b)
{
    printf("Enter a word: ");
    scanf("%s", a);

    printf("Enter a word: ");
    scanf("%s", b);
}


//int compare(char a[],char b[])

int cmpr(char a[size], char b[size])
{
    int i=0;  // integer variables declaration

    for(i=0; a[i] && (a[i] == b[i]); i++);

        int ind_dif = a[i] - b[i] ;

    return ind_dif;
}



void output(char a[], char b[], int ans)
{
    if(ans < 0)
      printf("%s is greater than %s\n", b, a);

    else if(ans > 0)
      printf("%s is greater than %s\n", a, b);

    else
       printf("%s is equal to %s\n", b, a);
}
