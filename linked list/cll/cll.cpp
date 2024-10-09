#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertNode(node* &tail ,int element  ,int d){

    if(tail == NULL){
        node* newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    else{
        node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;   
    }   
}

void print(node* &tail){
    node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);

    cout<<endl;
}


int main(){
    node* tail = NULL;
    insertNode(tail,3,4);
    print(tail);
    insertNode(tail,4,5);
    print(tail);

insertNode(tail,5,6);
    print(tail);
    insertNode(tail,4,1);
    print(tail);




}