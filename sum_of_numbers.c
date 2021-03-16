#include<stdio.h>
int main()
{
int i,n,sum;
float num;
printf("enter the number n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the number:");
scanf("%f",&num);
sum=sum+num;
}
printf("sum is %d",sum);
return 0;
}
