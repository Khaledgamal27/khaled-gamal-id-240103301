#include <iostream>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    for(int x=0;x < s1.length();x++){
        s1[x]=tolower(s1[x]);

    }
  for(int y=0;y<s2.length();y++){
      s2[y]=tolower(s2[y]);
  }

    if(s1<s2){
        cout<<"-1";
    }
    else if(s1>s2){
        cout<<"1";

    }
    else{   cout<<"0";}





    return 0;
}