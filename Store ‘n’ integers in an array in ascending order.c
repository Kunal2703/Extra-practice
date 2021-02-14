#include<stdio.h>
int main()

{
    int number[100];
    int i,j,m,n;
    printf("Enter the value of N\n");
    scanf("%d",&n);

    printf("Enter the numbers \n");
    for(i=0;i<n;i++)
        scanf("%d",&number[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(number[i]<number[j])
            {
                m=number[i];
                number[i]=number[j];
                number[j]=m;
            }
        }
    }
    printf("The  number arrange in ascending order are given below\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",number[i]);
    }
    return 0;

}
