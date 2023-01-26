//program to calculate compound interest
#include<stdio.h>
#include<math.h>
int main()
{
float t,r,p,interest;
printf("\n enter the principal_amount:");
scanf("%f",&p);

printf ("\n enter time value:");
scanf("&f",&t);

printf ("\n enter the rate value:");
scanf("%f",&r);

interest=p * pow((1+r),t);
//pow(2,8)
printf ("interest=%.3f",interest);
return 0;
}