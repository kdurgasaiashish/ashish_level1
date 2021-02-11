#include<stdio.h>
#include<math.h>
int main()
{
float x1,y1,x2,y2,d;;
printf("enter first coordinate two points\n");
scanf("%f%f",&x1,&y1);
printf("enter second coordinate two points \n");
scanf("%f%f",&x2,&y2);
d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("the distance between x1 :%f,y1 :%f and x2:%f, y2:%f is %f\n",x1,y1,x2,y2,d);
return 0;
}
