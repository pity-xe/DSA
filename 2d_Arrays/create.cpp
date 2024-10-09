#include <iostream>
using namespace std;

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




}