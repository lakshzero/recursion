#include<stdio.h>
int sum(int n){//with recursion 
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }

}

int Isum(int n){ //with loop
    int s=0;
    int i;
    for(i=1;i<=n;i++){
        s=s+i;
        }
        return s;    
}

int main(){
    int r;
    r=Isum(7);
    printf("%d",r);
    return 0;
}
