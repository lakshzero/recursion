#include<iostream>
#include<stdio.h>
using namespace std;

void fun(int n){
    if(n>0){
        printf("%d ",n);//tail function 
        fun(n-1);
    }
}

int main(){
    int x=3;
    fun(x);
    return 0;
}