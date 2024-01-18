#include<bits/stdc++.h>
using namespace std;
 int main(){
    int arr[9]={2,4,5,3,1,6,8,9,7};

    map<int,int>m;
    for(int i=0;i<9;i++){
        m[arr[i]]++;
    }
    int target=10;
    for(int i=0;i<9;i++){
        int a=target-arr[i];
        if(m.find(a)!=m.end()){
            if(a!=arr[i]){
            cout<<a<<" "<<arr[i]<<endl;
            }
            m.erase(arr[i]);
        }
    }
 }