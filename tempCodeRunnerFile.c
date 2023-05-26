#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Value of a : ");
    scanf("%d",&a);
    printf("Enter Value of b : ");
    scanf("%d",&b);
    printf("Enter Value of c : ");
    scanf("%d",&c);
    if(a==b & b==c & a==c)
        printf("triangle is equilateral");
    else if (a==b || b==c || a==c)
        printf("triangle is isosceles");
    else if (a!=b & b!=c & a!=c)
        printf("Triangle is scalene");
        return 0;

}
