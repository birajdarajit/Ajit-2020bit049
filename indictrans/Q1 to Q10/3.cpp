#include<bits/stdc++.h>
using namespace std;
int main(){
    // using map for storing the string
  map<string ,int>m;
  string a="";

  //Given String
  string txt="This is a sample text . This text is used for testing purposes.";
 
   for(int i=0;i<txt.size();i++){
    if(txt[i]!=' '){
        a+=txt[i];
    }
    else{
        if(m.find(a)==m.end()){
        m.insert({a,1});
        }
        else{
            m[a]++;
        }
        a="";
    }
   }
   for(auto it:m){
    cout<<it.first<<" "<<it.second<<endl;
   }
   return 0;
}