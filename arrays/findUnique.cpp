#include <iostream>
 using namespace std;

 int findUnique(int arr[],int n){
    int ans = 0;
    for (int i=0;i<n;i++){
        ans = ans^ arr[i];
    }
    return ans;
 
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

    cout<<"Unique no is : "<<findUnique(num,size);
}