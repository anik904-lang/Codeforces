#include<stdio.h>
int main(){
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int total=k*w*(w+1)/2;
    int borrow=total-n;
    if(borrow<0){
        borrow=0;
    }
    printf("%d",borrow);
    return 0;
    
}