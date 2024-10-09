#include <iostream>
using namespace std;

int reverse(int arr[],int n){
    int s=0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[],int n){
    for (int i= 0;i<n; i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
}
int main(){
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;

    int num[100];

    for(int i= 0;i<size; i++){
        cout <<"Enter elements in an array: ";
        cin>>num[i];
    }
    reverse(num,size);

    printArray(num,size);





    return 0;
}