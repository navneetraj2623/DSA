#include<stdio.h>
using namespace std;

class method_overloading{
    public:
    int data(int num1,int num2){
        int sum=num1+num2;
        return sum;
    }
    int data(float num1 ,float num2){
        int sum=num1+num2;
        return sum;
    }
};


int main(){
    method_overloading sum;
    sum.data(1,6);
    sum.data(6.7,9.8);

    return 0;
}