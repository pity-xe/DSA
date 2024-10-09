#include <iostream>
using namespace std;

int merge(int arr1[],int n, int arr2[],int m,int arr3[]){
    int i =0, j=0;
    int k = 0;
    while(i<n  && j<m){
        if(arr1[i]< arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n){
        arr3[k++] = arr1[i++];
    }

    while(j<m){
        arr3[k++] = arr2[j++];
    }

}

int print(int num[],int m){
    for (int i = 0;i< m;i++){
        cout << num[i] <<" ";
    }
    cout <<endl;
}

int main(){
    int arr1[5] = {1,4,5,6,7};
    int  arr2[4] = {2,3,8,9};

    int arr3[9] = {0};

    merge( arr1,5,arr2,4,arr3);
    print(arr3,9);


    return 0;
}