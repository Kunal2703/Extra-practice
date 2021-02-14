#include<stdio.h>
int main()
{
    int i,n,even=0;
    int a[1000];

    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
    }

    printf("Total even number in array : %d",even);
    return 0;
}
