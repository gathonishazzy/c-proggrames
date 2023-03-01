//function of volume of a cylinder
#include<stdio.h>
int volume();
int main()
{
int answer=volume();
printf("\nThe volume of a cylinder is:%d",answer);
return 0;
}
int volume()
{
int pi=3.142,r,h;
printf("\nEnter the radius and the height:");
scanf("%d%d",&r,&h);
return pi*r*r*h;
}