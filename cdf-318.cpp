#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int odd=(n+1)/2;
    if(k<=odd){
        cout<<2*k-1<<endl;

    }
    else{
        cout<<2*(k-odd)<<endl;
    }
    return 0;
}