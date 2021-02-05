#include<stdio.h>
int main()
{
float h,d,b;
float volume_of_tromoboloid;
printf("enter the elements of h,d,b");
scanf("%f%f%f",&h,&d,&b);
volume_of_tromoboloid = (((h*d*b)+(d/b))/3);
printf("volume_of_tromoboloid is%f",volume_of_tromoboloid);
}
