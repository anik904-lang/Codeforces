#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int count=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        
        int sum=4000+1+9+800+90;
  

        if(a[i]%4000==0 ||  a[i]%1==0 || a[i]%9==0 || a[i]%800==0 || a[i]%90==0 || a[i]%sum==0){
            count ++;
            
        }
    }
    cout<<count<<endl;
    return 0;
}