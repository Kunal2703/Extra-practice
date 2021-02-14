#include<stdio.h>

int main()
{
    int i,j,m,n;
    int Sum_of_Row,Sum_of_column;
    int matrix[100][100];

    printf("Enter the number of rows :");
    scanf("%d",&m);

    printf("Enter the number of columns :");
    scanf("%d",&n);

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter the element in matrix [%d][%d]=",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    for(i=0;i<m;i++)
    {
        Sum_of_Row=0;
        for(j=0;j<n;j++)
        {
            Sum_of_Row +=matrix[i][j];
        }
        printf("Sum of Row %d = %d\n",i+1,Sum_of_Row);
    }
    printf("\n");


    for(i=0;i<n;i++)
    {
        Sum_of_column=0;
        for(j=0;j<m;j++)
        {
            Sum_of_column +=matrix[j][i];
        }
        printf("Sum of Column %d = %d\n",i+1,Sum_of_column);
    }
   return 0;
}
