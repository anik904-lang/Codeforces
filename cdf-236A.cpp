#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
     int count=0;

    for(char c='a'; c<='z';c++){
        bool found=false;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                found=true;
                break;
            }
        }
        if(found) count++;
    }
        if(count%2==0)
            cout<<"CHAT WITH HER!"<<endl;
        else
            cout<<"IGNORE HIM!"<<endl;
        
    
    return 0;
}
