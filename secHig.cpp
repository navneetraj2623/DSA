#include<iostream>
using namespace std;

int main(){
    int arr[100]={3,56,23,98,123,985,345,344,127};

    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]>arr[i+1]){
            arr[i]=arr[i+1];
        }else{
            arr
        }
    }

    return 0;
}