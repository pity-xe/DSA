#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int getMax(int num[], int n){
    int maxi = INT_MIN;
    for (int i = 0;i<n;i++){

        
        
        if(num[i] > maxi){
            maxi = num[i];
        }

    }
    return maxi;
}

int getMin(int num[],int n){
    int mini = INT_MAX;
    for (int i = 0;i<n;i++){
        
        if(num[i] < mini){
            mini = num[i];
        }

    }
    return mini;

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

    cout << "Maximum is: "<<getMax(num,size)<<endl;
    cout << "Minimum is: "<<getMin(num,size)<<endl;



}