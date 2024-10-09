#include <iostream>
using namespace std;

int largestSum(int arr[][4],int row,int col){
    int maxi = INT16_MIN;
    int rowIndex = -1;
    
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "Maximum sum of rows is: "<< maxi << endl;
    return rowIndex;

}

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

    int ansIndex = largestSum(arr,3,4);
    cout<<"Index of largest sum is : "<<ansIndex<<endl;
}
