#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = right = NULL;
    }

};
static int idx = -1;
node* buildtree(vector<int> preorder){  //0(n)
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }

    node* root = new node(preorder[idx]);

    root->left = buildtree(preorder); //left subtree
    root->right = buildtree(preorder); //right subtree

    return root;
}

//preorder
void preOrder(node* root){  //0(n)
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node* root){  //0(n)
    if(root==NULL){
        return;
    }
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(node* root){  //0(n)
    if(root==NULL){
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void levelorder(node* root){
      queue<node*> q;

      q.push(root);
      q.push(NULL);
      while(q.size()>0){
           node* curr = q.front();
           q.pop();

           if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            } else{
                break;
            }
           }

           cout<<curr->data<<" ";
           if(curr->left != NULL){
               q.push(curr->left);
           }
           if(curr->right!=NULL){
            q.push(curr->right);
           }

      }
      cout<<endl;
}


int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    
    node* root = buildtree(preorder);

    cout<<root->data<<" ";
    cout<<root->left->data<<" ";
    cout<<root->right->data<<" ";
    cout<<endl;
    
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    levelorder(root);
    return 0;
}