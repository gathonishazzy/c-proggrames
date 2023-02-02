//voting requirements
#include<stdio.h>
int main()
{
  int nationality,age;
  printf("enter your nationality and age:");
  scanf("%d",&age);
  if (age>=18){
    printf("you can vote");
    }
  else{
    printf("unfortunately you cant vote");
    }
  return 0;
}