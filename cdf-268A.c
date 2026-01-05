#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int h[100];
    int a[100];

    for(int i=0;i<n;i++){
        scanf("%d %d",&h[i],&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(h[i]==a[j]){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}