#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="abcabcbb";
    int n=a.length();
    map<char,int>m;

    int count=0;

    int ans=INT_MIN;

    for(int i=0;i<n;i++){
        if(m.find(a[i])==m.end()){
            m.insert({a[i],1});
            count++;
        }
        else{
            ans=max(ans,count);
            m.clear();
            count=0;
        }
    }
    cout<<ans;

}