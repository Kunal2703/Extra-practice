#include<stdio.h>
#define size_of_array n
#define element e
#define position p
#define delete d

int main(void)
{
	int n,e,p,d,t1,t2;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	int b[n];

	printf("Enter value\n");
    for(int t=0;t<n;t++)
	{
    scanf("%d",&a[t]);
	b[t]=a[t];
	}
	printf("Enter the element position where the element should be inserted : ");
	scanf("%d",&p);
	printf("Enter the element to be inserted : ");
	scanf("%d",&e);

	if(p > n)
    printf("Invalid Input");
    else
    {
    for (int i=n-1;i >=p-1;i--)
    a[i+1] = a[i];
    a[p-1]=e;

	printf("Array after insertion is\n");
    for (int l=0;l<=n;l++)
    printf("%d\n", a[l]);
    }
	printf("Enter the position to delete element : ");
	scanf("%d",&d);
	if (d >= n+1)
    printf("Deletion not possible\n");
    else
    {
    for (int h=d-1;h<n-1;h++)
    b[h] = b[h+1];

    printf("Array after deletion\n");

   for (int j= 0;j<n-1;j++)
   printf("%d\n", b[j]);
   }
   return 0;
}

