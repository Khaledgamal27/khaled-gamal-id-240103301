#include <iostream>
using namespace std;
int main(){
    string name;
     string dif;
    cin>>name;
    for(int i=0;i<name.length();i++){
         for(int x=0;x<name.length();x++){
              if (name[i]==name[x]){
                continue;}
            else{
                dif+=name[i];
                }
              }



         }

    
    if(dif.length()%2==0){
        cout<<"CHAT WITH HER!";

    }
    else{
        cout<<"IGNORE HIM!";
    }



    return 0;
}