#include <iostream>
using namespace std;

int pivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s+ ((e-s)/2);
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s+ ((e-s)/2);

    }
    return s;mer
}

int main(){
    int arr[5] = {9,10,17,1,2};

    cout<< "Pivot element is : "<<pivot(arr,5);



    return 0;
}
