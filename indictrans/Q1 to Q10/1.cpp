#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;

   int i=0,j=a.size()-1;
     while(i<=j){
        swap(a[i],a[j]);
        i++,j--;
     }
     cout<<"Reverse string = "<<a;

 // by using reverse function
     // reverse(a.begin(),a.end());

}