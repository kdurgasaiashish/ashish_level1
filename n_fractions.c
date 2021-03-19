#include<stdio.h>
struct function
{
int a,b;
}
struct fraction sum(struct fraction fr1,struct fraction fr2);
void display(struct fraction fr1,struct fraction fr2,struct fraction fract);
int gcd(int num,int den)
{
int div,g,i;
if(num>den)
{
div=num;
}
for(i=div;i>n;i--)
{
if(num%i==0&&den%i==0)
{
g=i;
break;
}
}
return 0;
}
struct fraction input()
{
struct fraction input()
{
struct fraction fract;
printf("enter the numerator:\n");
scanf("%d",& fract.a);
printf("enter the denominator:\n");
scanf("%d",&fract.b);
return fract;
}
struct fraction sum(struct fraction fr1,struct fraction fr2)
{
struct fraction frsum;
frsum.a=(fr1.a*fr2.b)+(fr2.a*fr1.b);
frsum.b=(fr1,b*fr2.b);
int g;
g=gcd(frsum.a,frsum.b);
frsum.a=frsum.a/g;
frsum.b=frsum.b/g;
return frsum;
}
void display(struct fraction fr1,struct fraction fr2,struct fraction fract)
{
printf("the sum of %d %d and %d %d is %d %d",fract fr1.a,fract fr1.b,fract fr2.a,fract fr2.b,fract.a,fract.b);
}
int main()
{
struct fraction fract1,fract2,fract3;
fract1=input();
fract2=input();
fract3=sum(fract1,fract2);
display fract1,fract2,fract3;
return 0;
}
find the sum of n fractions.
