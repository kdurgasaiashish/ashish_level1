#include<stdio.h>
struct fraction
{
int a;
int b;
};
typedef struct fraction fraction;
int gcd(int a,int b)
{
	int g;
for(int i=1;i<=a && i<=b;i++)
{
if(a%i==0&&b%i==0)
g=i;
}
return g;
}
fraction input(int x)
{
fraction f;
printf("enter the fraction %d(numerator/denominator)",x);
scanf("%d%d",&f.a,&f.b);
return f;
}
void input_n_fraction(int n, fraction f[])
{
	for(int i= 0; i<n ;i++)
{
	f[i]=input(i+1);
}
}
fraction
compute_one_fraction(fraction f1 ,fraction f2)
{
	 fraction add;
 add.a=(f1.a*f2.b)+(f2.a*f1.b);
 add.b=(f1.b*f2.b);
 return add;

}
fraction compute(int n,fraction f[])
{ 
	fraction sum=f[0];
	for(int i=1;i<n;i++)
	{
		sum=compute_one_fraction(f[i],sum);
	}
	int g=gcd(sum.a,sum.b);
	sum.a/=g;
	sum.b/=g;

	return sum;
}
void displaysum(fraction sum,fraction f[],int n)

{
	int i;
for(i=1;i<n-1;i++)
	{
		printf("%d/%d +",f[i].a,f[i].b);
	
	}
		 printf("%d/%d=%d/%d",f[n-1].a,f[n-1],sum.a,sum.b);


}
int main()
{
fraction f[100];
int n;
fraction sum; 
printf("enter the value of n:");
scanf("%d",&n);
input_n_fraction(n,f);
sum=compute(n,f);
displaysum(sum,f,n);

}
