#include<stdio.h>
//int x=0; here for global variable recursion 
int fun(int n){
    static int x=0;
    if(n>0)
    {   
        x++;
        return fun(n-1)+x;
}
return 0;
}

int main(){
    int r;
    r=fun(5);
    printf("%d\n",r);

    return 0;
}
