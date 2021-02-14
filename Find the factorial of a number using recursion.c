
//Find the factorial of a given number using recursion

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number you want the factorial of \n");
    scanf("%d",&num);
    printf("The factorial of %d is %d\n",num,factorial(num));

    return 0;
}
int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
        return (number*factorial(number-1));
}
