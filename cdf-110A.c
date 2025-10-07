#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    int c=0,d;
    while(n){
        d=n%10;
        if(d==4||d==7) c++;
        n/=10;
    }
    if(c==4||c==7) printf("YES");
    else printf("NO");
    return 0;
}
