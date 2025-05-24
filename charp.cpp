#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    char val='A';
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<val ;
            val++;
        }
        val='A';
        cout<<endl;

    }
    return 0;
}