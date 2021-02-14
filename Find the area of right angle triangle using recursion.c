#include<stdio.h>

int main()
{
    int height,base,area;

    printf("Enter the height of the given triangle: ");
    scanf("%d",&height);

    printf("Enter the base of the given triangle: ");
    scanf("%d",&base);

    area = triange_area(height,base);
    printf("Area of Triangle is %d",area);


    return 0;
}
int triange_area(int height,int base)
{
    int area;
    area=0.5*height*base;
    return area;
}

