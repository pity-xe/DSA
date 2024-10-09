#include <iostream>
using namespace std;

int binarySearch(int num[],int size,int key){
    int start=0;
    int end = size-1;
    int mid = start +((start-end)/2);

    while(start<= end){
        if(num[mid] == key){
            return mid;
        }
        if(key > mid) {
           start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid =start +((start-end)/2);

    }
    return -1;
}
int main(){

    int even[6]={2,4,6,8,12,16};
    int odd[5]={4,8,9,10,56};

    int evenIndex = binarySearch(even,6,12);
    cout << "Index of 12 is : "<<evenIndex<<endl;
    int oddIndex = binarySearch(odd,5,10);
    cout << "Index of 4 is : "<<oddIndex<<endl;

    
    

    return 0;
}