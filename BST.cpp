#include<iostream>
using namespace std;

class tree{

    public:
    int data;
    tree* left;
    tree* right;

    tree(int v){
        this->data = v;
        this->left = NULL;
        this->right = NULL;
    }
};

tree* insertion(int val){
    // int val;
    // cout<<"Insert Element in the left side of "<<rootnode->data<<endl<<"Enter the value ";
    // cin>>val;
    tree* Rnode = new tree(val);
    int x;
    cin>>x;
    if(x == -1){
        return;
    }
    cout<<"Insert Element in the left side of "<<Rnode->data<<endl<<"Enter the value ";
    Rnode -> left = insertion(x);
    cout<<"Insert Element in the right side of "<<Rnode->data<<endl<<"Enter the value ";
    cin>>x;
    Rnode -> right = insertion(x);

}

int main(){

    int root;
    cout<<"Enter the value of root node of the Tree ";
    cin>>root;
    tree* rootNode = new tree(root);

    return 0;
}