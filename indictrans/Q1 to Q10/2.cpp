#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<" Size Of Array "<<endl;
    cin>>n;

    int a[n]={0};
    
    //taking Input of array
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }

}