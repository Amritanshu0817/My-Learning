#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* nextNode;
    Node* prevNode;

    Node(int value){
        this -> data = value;
        this -> nextNode = NULL;
        this -> prevNode = NULL;
    }

};

void insertAtHead(Node* &headOfList, Node* &tailOfList, int value){
     
      Node* addNode = new Node(value);
    
        if (headOfList == NULL)
    {
  
        headOfList = addNode;
        tailOfList = addNode;
    }

    else{
        addNode -> nextNode = headOfList;
        headOfList -> prevNode = addNode;
        headOfList = addNode;
    }

    cout<<"The added node is "<<addNode->data<<endl;
}

void insertAtTail(Node* &tailOfList,Node* &headOfList, int value){

    Node* addNode = new Node(value);     

    if (tailOfList == NULL){
        tailOfList = addNode;
        headOfList = addNode;
    }

    else{
        tailOfList -> nextNode = addNode;
        addNode -> prevNode = tailOfList;
        tailOfList = addNode;
    }
    
     cout<<"The added node is "<<addNode->data<<endl;
}

void print(Node* headOfList){

    Node* temp = headOfList;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> nextNode;
    }

    cout<<endl;

}

void insertAtPosition(Node* &headOfList, Node* &tailOfList, int position, int value){
    
    if(position == 1){
        insertAtHead(headOfList,tailOfList,value);
        return;
    }

    Node* temp = headOfList;
    int cnt = 1;

    while (cnt < position-1)
    {
        temp = temp -> nextNode;
        cnt++;
    }

    if(temp -> nextNode == NULL){
        insertAtTail(tailOfList,headOfList,value);
        return;
    }

    Node* addNode = new Node(value);
    addNode -> nextNode = temp-> nextNode;
    addNode -> prevNode = temp;
    temp -> nextNode -> prevNode = addNode;
    temp -> nextNode = addNode;

     cout<<"The added node is "<<addNode->data<<endl;
    
}

void deleteAtPosition(Node* &headOfList,Node* &tailOfList, int position){
    
    Node* current = headOfList;
    Node* previous = NULL;

    if(position == 1){
        current -> nextNode -> prevNode = NULL;
        headOfList = current -> nextNode;
        current -> nextNode = NULL;
        delete(current);
        return;
    }
    
    int cnt = 1;
    while (cnt < position)
    {
        previous = current;
        current = current -> nextNode;
        cnt++;
    }

    if(current -> nextNode == NULL){
        tailOfList = previous;
        
        previous -> nextNode = NULL;
        current -> nextNode = NULL;
        
        delete(current);  
        return;
    }

    current -> prevNode = NULL;
    previous -> nextNode = current -> nextNode;
    current -> nextNode -> prevNode = previous;
    current -> nextNode = NULL;
    
    delete(current);  

}

int main(){
   cout<<"Hello World"<<endl;

    Node* firstnode = new Node(15);
    Node* headoflist = firstnode;
    Node* tailoflist = firstnode;
    // Node* headoflist = NULL;
    // Node* tailoflist = NULL;

    print(headoflist);

    insertAtHead(headoflist,tailoflist,20);
    insertAtHead(headoflist,tailoflist,25);

    print(headoflist);
    cout<<"HEAD = "<<headoflist->data<<endl;
    cout<<"TAIL = "<<tailoflist->data<<endl;

    insertAtTail(tailoflist,headoflist,10);
    insertAtTail(tailoflist,headoflist,5);

    print(headoflist);
    cout<<"HEAD = "<<headoflist->data<<endl;
    cout<<"TAIL = "<<tailoflist->data<<endl;

    insertAtPosition(headoflist,tailoflist,3,22);
    insertAtPosition(headoflist,tailoflist,1,30);
    insertAtPosition(headoflist,tailoflist,8,0);
   
    print(headoflist);
    cout<<"HEAD = "<<headoflist->data<<endl;
    cout<<"TAIL = "<<tailoflist->data<<endl;

    deleteAtPosition(headoflist,tailoflist,8);
    deleteAtPosition(headoflist,tailoflist,5);
    deleteAtPosition(headoflist,tailoflist,1);

    print(headoflist);
    cout<<"HEAD = "<<headoflist->data<<endl;
    cout<<"TAIL = "<<tailoflist->data<<endl;

    return 0;
}