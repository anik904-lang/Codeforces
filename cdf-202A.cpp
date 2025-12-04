#include<iostream>
using namespace std;
int main(){
    string x;
    cin>>x;
    char max='a';
    for(int i=0;i<x.size();i++)
        if(x[i]>max)
            max=x[i];
        
    
    for(int i=0;i<x.size();i++)
        if(x[i]==max)
            cout<<max;
            
    
    return 0;
}