#include <iostream>
using namespace std;

int firstOcc(int num[],int n, int key){
    int s=0;
    int e = n-1;
    int mid = s+((e-s)/2);
    int ans =-1;

    while(s<=e){
        if (num[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(num[mid] > key){
            e = mid -1;

        }
        else if (num[mid]<key){
            s = mid +1;
        }
        mid = s+((e-s)/2);
        }
        return ans;
    }




int lastOcc(int num[],int n,int key){
    int s=0;
    int e = n-1;
    int mid = s+((e-s)/2);
    int ans =-1;

    while(s<=e){
        if (num[mid]==key){
            ans = mid;
            s = mid +1;
        }
        else if(num[mid] > key){
            e = mid -1;

        }
        else if (num[mid]<key){
            s = mid +1;
        }
        mid = s+((e-s)/2);
        }
        return ans;

}

int main(){

    int even [8] = {2,3,4,4,4,4,6,7};

    cout<<"First occurence of a number is: "<<firstOcc(even,8,4)<<endl;
    cout<<"Last occurence of a number is: "<<lastOcc(even,8,4);


    return 0;
}