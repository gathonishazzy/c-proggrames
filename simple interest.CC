//program to calculate simple interest
#include<stdio.h>
int main ()
{
float p,r,t,si;
printf("\n enter value of p:");
scanf("%f",&p);
printf("\n enter value of r:");
scanf("%f",&r);
printf("\n enter value of t:");
scanf("%f",&t);
si=(p*r*t)/100;
printf("\n\n simple interest=%f",si);
return 0;
} 