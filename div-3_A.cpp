#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int n;
        cin>>n;
        if(n%2==0)
        cout<<2<<endl;
        else if(n%3==0)
        cout<<3<<endl;
        else
        cout<<1<<endl;
    }
    return 0;
}