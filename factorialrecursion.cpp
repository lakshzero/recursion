#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int Ifact(int n){
    int f=1;
    int i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
}
return f;
}

int main()
{
int r;
int b;
b= Ifact(5);
r= fact(5);
printf("by recursion %d\n",r);
printf("by itertation  %d\n",b);
return 0;
}