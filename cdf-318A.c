#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int odd=(n+1)/2;
    if(k<=odd){
        printf("%d\n",2*k-1);

    }else{
        printf("%d\n",2*(k-odd));
    }
    return 0;
}