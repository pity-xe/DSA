#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insertIntoBST(node* root, int d) {
    if (root == nullptr) {
        root = new node(d);
        return root;
    }

    if (root->data > d) {
        root->left = insertIntoBST(root->left, d);
    }
    else {
        root->right = insertIntoBST(root->right, d);
    }
    return root;
}

void takeInput(node*& root) {
    int data;
    cin >> data;
    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void LevelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp) {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
        else {
            // If temp is NULL, it indicates the end of a level
            // Print a newline to separate levels
            cout << endl;
            if (!q.empty()) {
                q.push(NULL); // Push NULL to mark the end of the next level
            }
        }
    }
}
int minVal(node* root){
	// Write your code here.
	if( root == NULL )

     return -1 ;

	node* temp = root;
	while(temp->left != nullptr){
		temp = temp->left;
	}
	int ans = temp->data;	
	return ans;
}

node* deleteFromBST(node* root,int val){
    //base case
    if(root == nullptr){
        return root;
    }
    if(root->data == val){
        //0 child
        if(root->left == nullptr && root->right == nullptr){
            delete root;
            return nullptr;
        }
        //1 child
        //left child
         if(root->left != nullptr && root->right == nullptr){
            node* temp = root->left;
            delete root ;
            return temp;
        }
        //right child
        if(root->left == nullptr && root->right != nullptr){
            node* temp = root->right;
            delete root ;
            return temp;
            
        }
        //2 child
        if(root->left != nullptr && root->right != nullptr){
            int mini =  minVal(root->right);
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }

    }
    else if(root->data >val){
        root->left = deleteFromBST(root->left,val);
    }
    else if(root->data <val){
        root->right = deleteFromBST(root->right,val);

    }
}


int main() {
    node* root = nullptr;
    cout << "Enter data to create BST: " << endl;
    takeInput(root);

    cout<< "Min Value is : "<<minVal(root) <<endl;

    root= deleteFromBST(root,30);

    cout << "Printing the BST" << endl;

    LevelOrderTraversal(root);

    return 0;
}
