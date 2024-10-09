#include <iostream>
#include <climits>


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





int main(){
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;

    int num[100];

    for(int i= 0;i<size; i++){
        cout <<"Enter elements in an array: ";
        cin>>num[i];
    }
