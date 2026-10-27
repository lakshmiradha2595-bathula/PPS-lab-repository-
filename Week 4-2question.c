#include<stdio.h>
void main()
{
    int a, b, c,max ;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max=(a>b)&&(a>c)? printf("a"):((b>c)?printf("b"):printf("c"));
    printf("max number%d",max);
}
