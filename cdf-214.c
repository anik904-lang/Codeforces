#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int count=0;

    for(int a=0;a<=n;a++){
        for(int b=0;b<=m;b++){
            if(a*a+b==n && a+b*b==m){
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}