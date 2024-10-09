#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
          int data;
          node *left;
          node *right;

    
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right =NULL;
    }
};

node* bulidTree(node* root){
    cout<<"enter the data for node: ";
    int data;
    cin>>data;
    root = new node(data);

    if(data ==-1){
        return NULL;
    }

    cout<< "enter data for left of "<<data<<endl;
    root->left  = bulidTree(root->left);
    cout<< "enter data for right of "<<data<<endl;
    root->right  = bulidTree(root->right);
    return root;

}

void LevelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);//this means there are altready elemnets in the queue
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }

}

void inorder(node* root){
    //base  case
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    //base  case
    if(root == nullptr){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    //base  case
    if(root == nullptr){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root = NULL;

    root = bulidTree(root);

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"printing Level order traversal"<<endl;
    LevelOrderTraversal(root);

    cout<<"printing inorder traversal"<<endl;
    inorder(root);

    cout<<"printing preorder traversal"<<endl;
    preorder(root);

    cout<<"printing postorder traversal"<<endl;
    postorder(root);


    return 0;
}