#include<iostream>
#include<stdio.h>
using namespace std;

void fun(int n){
    if(n>0){
         fun(n-1);
        printf("%d ",n);//head function 
    }
}

int main(){
    int x=3;
    fun(x);
    return 0;
}