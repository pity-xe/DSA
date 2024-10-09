#include <iostream>
using namespace std;

void sortArray(int *arr,int n){
    if(n == 0 || n==1){
        return;
    }

    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}

int main(){
    int arr[] = {2,5,7,4,8,1};

    sortArray(arr,6);
    for(int i =0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}