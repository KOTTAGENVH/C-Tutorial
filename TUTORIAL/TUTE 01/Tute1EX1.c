#include<stdio.h>
int main()
{
int sub1,sub2;
float avg;
printf("Enter the marks for sub1 : ");
scanf("%d",&sub1);
printf("Enter the marks for sub2 : ");
scanf("%d",&sub2);
avg=(sub1+sub2)/2;
printf("The average is %.2f ",avg);
return 0;
}