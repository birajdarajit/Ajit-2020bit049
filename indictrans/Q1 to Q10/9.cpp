#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<string>v;
   v[0]="flower";
   v[1]="flow";
   v[2]="flight";
     
     // sort the list
    sort(v.begin(),v.end());
    
    int n=v[0].length();
    string ans="";

    string a=v[0],b=v[2];

    // compare first and last  element till common char found 


    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<ans;
            break;
        }
        ans+=a[i];
    }
    cout<<ans;
}