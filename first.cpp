#include <iostream>
using namespace std;

int main(){
    int a=15;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=(a-i);j++){
            cout<<" ";
        }for(int k=1;k<=2*i-1;k++){
            cout<<"*";

        }
        cout<<endl;    
        }   
     return 0;   
    }
    


