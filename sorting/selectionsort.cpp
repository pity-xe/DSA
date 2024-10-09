#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int selection(int arr[], int n){
    for(int i = 0;i<n-1;i++){
        int minIndex=i;

        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
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

    selection(arr,7);

    print (arr,7);



    return 0;
}