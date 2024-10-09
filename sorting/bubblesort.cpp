#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int bubble(int arr[], int n){
   for (int i = 1;i<n;i++){
    //for round 1 to n-1
        for(int j=0;j<n-i;j++){
            //process element till n-i th index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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

    bubble(arr,7);

    print (arr,7);



    return 0;
}