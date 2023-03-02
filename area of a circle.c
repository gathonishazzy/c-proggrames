//program to find the area of a circe
#include<stdio.h>
#define pi 3.142
int area(int r);
int main()
{
int r ,area;
printf("\nEnter the value of radius");
scanf("%d",&r);

area=pi*r*r;
printf("\nThe area of the circle is: %d", area);

return 0;
}

int area(int r)
{
int answer;
answer=pi*r*r;

return answer;
}
