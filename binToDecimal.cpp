#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int pow=1;
    int remainder,sum=0;
    while(n>0){
        remainder=n%2;
        remainder/=10;
        sum+=(remainder*pow);
        pow*=2;
    }
    return sum;
}

int main(){
    cout<<binaryToDecimal(101010)<<endl;
    return 0;
}