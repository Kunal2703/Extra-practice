#include<stdio.h>

int sum_of_array(int array[],int n, int i)
{
    if(i<n)
    return (array[i] + sum_of_array(array,n,++i));

    return 0;
}
int main()
{
    int array[100],i,n,sum = 0;

    printf("Enter the size of the array : ");
    scanf("%d",&n);

    printf("Enter the elements in the array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
    sum = sum_of_array(array,n,0);
    printf("Sum of Array is : %d",sum);
}

