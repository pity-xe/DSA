#include <iostream>
using namespace std;

class stack{
    public:
    int top ;
    int size;
    int *arr;

    stack(int size){
        this->size = size;
        arr= new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top >1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow";               
        }

    }

    void pop(){
        if(top>=0){
            top--;
    
        }else{
            cout<<"Stack Underflow";
        }

    }

    int peak(){
        if(top>=0){
          return arr[top] ;
        }
        else{
            cout<<"Stack is empty";
        }

    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

    }
};


int main(){

    stack st(6);

    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(6);
    
    cout<<st.peak();

    st.pop();

    cout<<st.peak();
    st.pop();
    cout<<st.peak();
    st.pop();
    cout<<st.peak();
    st.pop();
    cout<<st.peak();
    st.pop();
    cout<<st.peak();
    st.pop();
    




}
