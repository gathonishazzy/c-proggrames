//program to find volume of a sphere
#include<stdio.h>
#define pi 3.142
int volume(int r);
int main()
{
    int r,volume;
    printf("\nEnter the value of the radius");
    scanf("%d",&r);
    volume=4/3* pi*r*r*r;
    printf("\nThe volume of the sphere is:%d",volume);
    return 0;
}
int volume(int r)
{
    int answer;
    answer=4/3* pi*r*r*r;
    return answer;
}