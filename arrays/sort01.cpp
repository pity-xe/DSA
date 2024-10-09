#include <iostream>
using namespace std;

int printArray(int arr[],int n){
    for (int i= 0;i<n; i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
}

int sort(int arr[], int n){
    int i=0;
    int j = n-1;
    
    while(i<j){
         while(arr[i]==0 && i<j){
        i++;
    }
    while(arr[j]==1 && i<j){
        j--;
    }

    if( i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    }
   


}

int main(){

    int arr[8]={0,1,1,0,1,0,1,0};

    sort(arr,8);
    cout<<"Sorted array is: ";
    printArray(arr,8);


    return 0;
}