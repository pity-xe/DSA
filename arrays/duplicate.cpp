#include <iostream>
using namespace std;

int duplicate(int num[],int n){
    int ans=0;
    for (int i=0;i<n;i++){
        ans = ans^num[i];
    }
    for (int i=1;i<n;i++){
        ans = ans ^ i;
    }
    return ans;
}


int main(){
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;

    int num[100];
    cout<<"Enter elemnts in an array: "<<endl;
    for(int i =0;i<size;i++){
        cin>>num[i];
    }

    cout << "duplicate is: "<< duplicate(num,size);
return 0;
}

