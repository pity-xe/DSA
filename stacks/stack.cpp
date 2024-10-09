#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();

    cout<<" top element is : "<<s.top()<<endl;

    if(s.empty()){
        cout<< "Stack is empty."<<endl;
    }
    else{
        cout << "Stack is not empty."<<endl;
    }

    return 0;
}