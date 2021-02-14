#include <stdio.h>

#define ROW 3
#define COL 3
int main()
{
	int a[ROW][COL],b[ROW][COL],i,j;

	printf("\nENTER VALUES FOR MATRIX:\n");
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)

			scanf("%d",&a[i][j]);

	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			b[j][i]=a[i][j];


	printf("\nTRANSPOSE MATRIX:\n");

	for(i=0;i<COL;i++)
    {
		for(j=0;j<ROW;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	return 0;
}
