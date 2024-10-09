#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }

    // int small = factorial(n-1);
    // int big  = n * factorial(n-1);
    // return big;
    return n * factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter a value of n: ";
    cin>>n;

    int ans = factorial(n);

    cout << "factorial is: "<<ans<<endl;
}