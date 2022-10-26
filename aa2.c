#include<stdio.h>
int main()
{
    int x,y,z;
    printf("\n Enter first no.:-");
    scanf("%d",&x);
    printf(" Enter second no.:-");
    scanf("%d",&y);
    printf("before swap first = %d and second = %d\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("after swap first = %d and second = %d\n",x,y);
    return 0;
}