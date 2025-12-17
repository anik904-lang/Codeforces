#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[]={"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
    int sum=0;

   for(int i=0;i<n;i++){
         string s;
         cin>>s;
        if(s==a[0])
           sum+=4;
          else if(s==a[1])
           sum+=6;
          else if(s==a[2])
             sum+=8;
           else if(s==a[3])
             sum+=12;
           else if(s==a[4])
                sum+=20;
   }
   cout<<sum<<endl;
    return 0;
}