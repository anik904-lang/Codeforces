#include<stdio.h>
int main()
{
   int n,r,c,i,j;
   for(i=1;i<=5;i++)

   {
       for(j=1;j<=5;j++)
       {
           scanf("%d",&n);
           if(n==1)
           {
               r=i;
               c=j;
           }
       }
    }
       printf("%d\n", (r>3?r-3:3-r)+(c>3?c-3:3-c));
    return 0;
}
