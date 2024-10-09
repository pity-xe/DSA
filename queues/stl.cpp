#include <iostream>
using namespace std;
#include <queue>

int main(){

    queue<int> q;
    q.push(12);
    cout<<"front element is: "<<q.front()<<endl;
    q.push(54);
    cout<<"front element is: "<<q.front()<<endl;
    q.push(67);
    cout<<"front element is: "<<q.front()<<endl;

    cout<<"Size of queue is : "<<q.size()<<endl;;
    q.pop();
    cout<<"Size of queue is : "<<q.size()<<endl;


    if(q.empty()){
        cout<<"Queue is empty"<<endl;;
    }
    else{
        cout<<"Queue is not empty"<<endl;;

    }

}