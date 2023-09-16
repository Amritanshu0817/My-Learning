#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* nextNode;

    Node(int v){
        this->data = v;
        this->nextNode = NULL;
    }
};

class stack{
    Node* topel;

    public:
    stack(){
        topel = NULL;
    }
    void push(int e){
        Node* addNode = new Node(e);
        addNode ->nextNode = topel;
        topel = addNode;
        cout<<e<<" Added Successfully"<<endl;
    }
    void top(){
        cout<<topel -> data<<endl;
    }
    void pop(){
        
    }
};


int main(){
    cout<<"Hello World"<<endl;
    stack s;
    s.push(10);
    s.push(12);
    s.push(15);
    s.top();

    return 0;
}