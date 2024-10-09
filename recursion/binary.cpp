#include <iostream>
using namespace std;

bool binary(int *arr, int s,int e, int k){

    if(s>e){
        return false;
    }

    int mid = s+ (e-s)/2;

    if(arr[mid] == k){
        return true;
    }

    if(arr[mid]< k){
        return binary(arr,mid+1,e,k);
    }
    else{
        return binary(arr,s,mid-1,k);
    }
}

int main(){
    int arr[] = {0,1,3,4,5,6,7,8,9};
    int size = 9;
    int key = 10;

    bool ans = binary(arr,0,8,key);

    if(ans){
        cout<<"Element is present";
    }
    else{
        cout << "Element is absent";
    }
}