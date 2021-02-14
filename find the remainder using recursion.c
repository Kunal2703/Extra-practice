
#include<stdio.h>
float remainder(int,int);
int main()
{
    int a,b,rem;

    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    rem = remainder(a,b);
    printf("Remainder is %d",rem);
    return 0;
}
float remainder(int a,int b)

{

    int remainder;
    remainder = a%b;
    return remainder;
}
