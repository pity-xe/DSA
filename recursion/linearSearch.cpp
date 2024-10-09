#include <iostream>
using namespace std;

bool linear(int arr[], int size, int k){
    if(size == 0){
        return false;
    }

    if(arr[0] == k)
        return true;
    else{
        return linear(arr+1,size-1,k);
    }
}

int main(){
    int arr[] = {0,1,3,4,5,6,7,8,9};
    int size = 9;
    int key = 5;

    bool ans = linear(arr,size,key);

    if(ans){
        cout<<"Element is present";
    }
    else{
        cout << "Element is absent";
    }
}