#include <iostream>
using namespace std;
int main(){
int petya;
int vasya;
int tonia;
int num_quest;
int count_answer=0;
// cout<<" num_quest"<<endl;
cin>>num_quest;

if (num_quest>=1){
for(int i=0;i<num_quest;i++){
   
    // cout<<"enter answer petya"<<endl;
     cin>>petya;
    // cout<<"enter answer vesya"<<endl;
      cin>>vasya;
    // cout<<"enter answer tonia"<<endl;
      cin>>tonia;
    if((petya==1 && vasya==1) || (petya==1 && tonia==1) || (vasya==1 && tonia==1)){
         count_answer++;
    }
    else{
        cout<<"not ansewer";
    }
}







}

cout<<count_answer;





return 0;
}