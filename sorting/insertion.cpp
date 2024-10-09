#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int insertion(int arr[], int n){
   for (int i = 1;i<n;i++){
    int temp = arr[i];
    int j=i-1;
    //for round 1 to n-1
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int print(int arr[],int n){
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}


int main(){

    int arr[7] = {3,7,8,4,5,9,0};

    insertion(arr,7);

    print (arr,7);



    return 0;
}