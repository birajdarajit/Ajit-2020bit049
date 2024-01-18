#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<" Input The String";

    cin>>a;
    int n=a.length();
   int i=0, j=n-1;
     while(i<=j){
        if(a[i]!=a[j]){
            cout<<"False";
            return 0;
           
        }
        i++,j--;
     }
     cout<<"True";
     
}