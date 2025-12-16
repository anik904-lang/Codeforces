# include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int a[]={100,20,10,5,1};
   int count =0;

   for(int i=0;i<5;i++){
        count +=n/a[i];
        n%=a[i];

        if(n==0){
            break;
        }
   }
   printf("%d",count);
   return 0;
   
}