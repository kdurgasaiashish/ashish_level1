#include<stdio.h>
typedef struct
{
int num;
int deno;
}fraction;
fraction sum(fraction,fraction);
int gcd(int a,int b){
int g=1;
for(int i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
{
g=i;
}
   }
return g;
}

fraction input(int x)
{
fraction f;
printf("enter fraction%d(numerator/denominator):",x);
scanf("%d%d",&f.num,&f.deno);
return f;
}
 fraction sum(fraction f1,fraction f2)
{
 fraction add;
 add.num=(f1.num*f2.deno)+(f2.num*f1.deno);
 add.deno=(f1.deno*f2.deno);
 int g=gcd(add.num,add.deno);
 add.num/=g;
 add.deno/=g;
 return add;
 }

void display(fraction f1,fraction f2,fraction sum)
{
printf("%d/%d+%d/%d is %d/%d\n",f1.num,f1.deno,f2.num,f2.deno,sum.num,sum.deno);}
int main()
{
fraction f1=input(1);
fraction f2=input(2);
fraction result=sum(f1,f2);

display( f1,f2,result);
}



