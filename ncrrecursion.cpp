#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int ncr(int n, int r)
{
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}
int recursivestyle(int n, int r){
    if(r==n || r==0 )
    {
        return 1;
    }
    else
    {
        return recursivestyle(n-1,r-1)+recursivestyle(n-1,r);
    }
}
int main()
{
    printf("dircet formula %d\n",ncr(4,3));
    printf("recursionstyle %d\n",recursivestyle(4,3));
    return 0;
}