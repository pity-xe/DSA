#include <iostream>
using namespace std;

bool isSorted(int arr[],int size){

    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool leftPart = isSorted(arr+1,size-1);
        return leftPart;
    }
}

int main(){
    int arr[] = {2,4,6,9,8,9};
    int size = 6;

    int ans = isSorted(arr,size);

    if(ans){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }

}