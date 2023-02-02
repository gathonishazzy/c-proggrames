// bank loan
#include<stdio.h>
int main ()
{
  int age,salary;
  printf("enter your age in years and salary:");
  scanf("%d%d",&age,&salary);
  if(age>=21&&salary>=21000){
    printf("congratulations you qualify for a loan");
    }
  else{
    printf("unfortunately you do not qualify for the loan");
    }
  return 0;
  }