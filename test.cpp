#include<iostream>
using namespace std;

int main(){
    int x=874985,digit=0,count=0;
    while(x!=0){
        x=x/10;
        digit++;
    }
    cout<<digit<<endl;
    return 0;
}