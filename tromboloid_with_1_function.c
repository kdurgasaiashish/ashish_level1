#include<stdio.h>
int main()
{
int h,d,b;
float volume;
printf("enter the height,depth,breadth of tromboloid");
scanf("%d%d%d",&h,&d,&b);
volume =0.33*((h*d*b)+(d/b));
printf("volume of tromoboloid is%f",volume);
}
