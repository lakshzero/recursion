#include<stdio.h>

double e(int x,int n)
{

static double p=1,f=1;
double r;//for storing  

if(n==0)
{
return 1;
}

else
{

r=e(x,n-1);
p=p*x;//power
f=f*n;//factorial
return r+p/f;

}

}
int main()
{
printf("%lf\n",e(1,10));

    return 0;
}
