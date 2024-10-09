#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertAtHead(Node* &head ,int d ){
    Node* temp= new Node(d);
     temp->next = head;
     head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtposition(Node* &tail,Node* &head,int position,int d){
    //if position is at start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt <position-1){
        temp = temp->next;
        cnt++;
    }

    Node* insertNode  = new Node(d);
     insertNode->next = temp->next ;
     temp->next = insertNode;

     //if position is last
     if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
     }


}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp  = temp->next;
    }
    cout<<endl;

}

 void deleteNode(Node* &head,int position)
{
    if(position == 1){
        Node* temp = head;
        head = head-> next;
        temp->next = NULL;
        delete temp;   
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(10);

    // cout<<"data is: "<<node1-> data<<endl;
    // cout<<"next is: "<<node1->next<<endl;

    Node* head  = node1;
   Node* tail = node1;
   insertAtTail(tail,12);
   print(head);
    insertAtTail(tail,15);
   print(head);

   insertAtposition(tail,  head,3,22);
   print(head);
   insertAtTail(tail,25);
   print(head);
   insertAtTail(tail,30);
   print(head);

   deleteNode(head,2);
   print(head);

 
    



}