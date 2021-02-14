//swap of two number using bitwise operators

#include<stdio.h>

void swap(int* , int*);

int main()
{
    int num1,num2;
    printf("Enter the value of num1:");
    scanf("%d", &num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);

    printf("\nThe  number before swapping are:\nNumber1 = %d \nNumber2 = %d", num1,num2);
    swap(&num1,&num2);
    printf("\nThe Number after swapping are:\nNumber1 = %d \nNumber2 = %d", num1,num2);
    return 0;
}
void swap(int*x,int*y)
{
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;

}
