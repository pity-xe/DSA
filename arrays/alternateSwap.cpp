#include <iostream>
using namespace std;

int alternateSwap(int arr[],int n){
    for(int i =0;i<n;i +=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }

}

int printArray(int arr[],int n){
     for (int i= 0;i<n; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;

    int num[100];
    cout<<"sEnter elemnts in an array: "<<endl;
    for(int i =0;i<size;i++){
        cin>>num[i];
    }

    alternateSwap(num,size);
    printArray(num,size);





    return 0;
}