#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);d
    int max=b,min=b,count=0;
    for(int i=1;i<a;i++){
        scanf("%d",&b);
        if(b>max){
            count++;
            max=b;
        }else if(b<min){
            count++;
            min=b;
        }
    }
    printf("%d\n",count);
    return 0;

}