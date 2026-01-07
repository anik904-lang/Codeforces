#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int count=0;
        for(int i=0;i<a;i++){
            int b;
            cin>>b;
          if(b==0)
          count++;
        }
        if(count%2==1)
        cout<<"Alice\n";
        else
        cout<<"Bob\n";
    }
    return 0;
}
