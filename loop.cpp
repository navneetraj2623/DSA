#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={3,2,9,5,4};
    int smallest=arr[0];
    int idx=0;
    for(int i=1;i<5;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            idx=i;
        }
    }
    cout<<idx;
    return 0;

}