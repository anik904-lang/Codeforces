#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==2)
        cout<<2<<endl;
        else if(a==3)
        cout<<3<<endl;
        else if(a%2==0)
        cout<<0<<endl;
        else
        cout<<1<<endl;
    }
    return 0;
}