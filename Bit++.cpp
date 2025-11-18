#include <iostream>
using namespace std;
int main(){
    int statment;
    cin>>statment;
    string opration;
    
    int x=0;
    for(int i=1;i<=statment;i++){
        cin >>opration;
    if (opration == "++x"){
         ++x;

    }
    if(opration=="--x"){
        --x;
    }
    if (opration=="x++"){
        x++;
    }
    if (opration=="x--"){
        x--;
    }
}
cout<<x;
return 0;
}