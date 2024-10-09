#include <iostream>
using namespace std;

void printSum(int arr[][4],int i,int j){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        cout<<"Printing Row Sum: "<<sum << " ";
    }
    cout<<endl;
}

// void printCol(int arr[][4],int i,int j){
//     for(int i=0;i<4;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum += arr[j][i];
//         }
//         cout<<"Printing Column Sum: "<<sum << " ";
//     }
//     cout<<endl;
// }

int main(){
    int  arr[3][4];

    //input in an array
    cout<<"Enter elements in array: "<<endl;
    for(int i =0;i<3;i++){
        for(int j =0;j<4;j++){
            
            cin>>arr[i][j];
        }
    }

    //output of an array
    for(int i =0;i<3;i++){
        for(int j =0;j<4;j++){
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSum(arr,3,4);
    // printCol(arr,4,3);




}