#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter an integer: ";
    cin >> num;

    cout << ((num%2 == 0) ?  "even": "odd");

    return 0;
}