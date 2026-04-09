#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;

    for(int i=0;i<x;i++){

       int a,b,c;
       cin>>a>>b>>c;
       if(a+b==c || b+c==a || c+a==b)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
    return 0;
}