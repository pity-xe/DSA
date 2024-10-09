#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
    }

};

//printing the linked list
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


//finding the length

int getLength(node* head){
    int cnt =0;
      node* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insertAtHead(node* &tail,int d){
    node* temp = new node(d);
    temp->next = tail;
    tail->prev = temp;
    tail = temp;
    tail = temp;
}

void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
}

void insertAtposition(node* &tail,node* &head,int position,int d){
    //if position is at start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt <position-1){
        temp = temp->next;
        cnt++;
    }
    //if position is last
     if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
     }

    node* insertNode  = new node(d);
     insertNode->next = temp->next ;
     temp->next -> prev = insertNode;
     temp->next = insertNode;
     insertNode ->prev = temp;

    
}

void deleteNode(node* &head,int position)
{
    if(position == 1){
        node* temp = head;
        temp->next ->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        
    }
    else{
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}



int main(){
        node* node1 = new node(10);

        node* head = node1;
        node* tail = node1;
        print(head);

    

        insertAtHead(head,12);
        print(head);

        insertAtHead(head,14);
        print(head);

        insertAtTail(tail,8);
        print(head);

        insertAtposition(tail,head,1,16);
        print(head);

         insertAtposition(tail,head,3,26);
        print(head);

        insertAtposition(tail,head,5,2);
        print(head);
        
         insertAtposition(tail,head,8,2);
        print(head);

        deleteNode(head,7);
        print(head);






}