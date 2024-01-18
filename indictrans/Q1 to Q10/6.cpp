#include<bits/stdc++.h>
using namespace std;
 int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};

    int i=0,j=8;
    int target=6;
    
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==target){
            cout<<mid;
            break;
        }
        else if(arr[mid]>target){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
 }