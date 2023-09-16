#include<iostream>
using namespace std;

// CREATING A NODE USING THE CLASS WHICH CONTAINS A DATA VALUE AND A POINTER OF NODE TYPE
class Node{
    public:
    int data;
    Node* nextNode;

// CONSTRUCTOR OF THE SAME CLASS USED IN ASSIGNING THE VALUE TO THE NODE 
    Node(int key){
        this -> data = key;
        this -> nextNode = NULL;
    }
};

// INSERTING A NODE INTO THE LINKED LIST AT HEAD
void insertAtHead(Node* &headOfList, int value){
    Node* addNode = new Node(value);               // TO INSERT ANY NODE WE HAVE TO CREATE A NODE FIRST
    if(headOfList == NULL){
        headOfList = addNode;
    }
    else{
        addNode -> nextNode = headOfList;             // POINTING THE NODE POINTER OF THE ADDED NODE TO THE HEAD OF THE NODE
        headOfList = addNode;                        // UPDATING THE HEAD OF THE LINKED LIST TO THE NEW NODE
    }
    
}

// INSERTING A NODE INTO THE LINKED LIST AT TAIL
void insertAtTail(Node* &tailOfList, int value){
    Node* addNode = new Node(value);               // TO INSERT ANY NODE WE HAVE TO CREATE A NODE FIRST

    if(tailOfList == NULL){
        tailOfList = addNode;
    }
    else{
    tailOfList -> nextNode = addNode;             // POINTING THE NODE POINTER OF THE TAIL NODE TO THE HEAD OF THE ADDED NODE
    tailOfList = addNode;                        // UPDATING THE TAIL OF THE LINKED LIST TO THE NEW NODE
    }

}


// TRAVERSING THROUGH LINKED LIST
void print(Node* &headOfList){           // TO PRINT THE LIST WE MUST HAVE TO FIND FROM WHERE THE LIST IS STARTING
    Node* temp = headOfList;            // CREATING A NODE POINTER WHICH POINT THE HEAD OF LIST
    while (temp != NULL)
    {
        cout<<temp -> data<<" ";       // TEMP IS POINTING TO THE HEAD AND WE HAVE TO PRINT THE DATA IN HEAD
        temp = temp -> nextNode;      // TEMP IS POINTING TO THE NEXTNODE POINTER OF THE HEAD
    }
    cout<<endl;

// NEXTNODE IS POINTING TO THE DATA OF THE ADDEDNODE,
// SO USING THE LOOP THE WHOLE LIST WILL BE TRAVERSED.

}


// FOR INSERTING ANY NODE AT ANY POSITION
void insertAtPosition(Node* &headOfList,Node* &tailOfList,int position,int value){

    if(position == 1){                                  // IF WE HAVE TO ADD THE NODE IN THE BEGINING 
        insertAtHead(headOfList,value);
        return;
    }
    

    Node* temp = headOfList;                  // CREATING A NODE POINTER WHICH POINTS THE HEAD OF THE LIST
    int cnt = 1;                             // VARIABLE FOR REACHING AT CORRECT POSITION
    
    while (cnt < position-1)                // FOR REACHING AT THE POSITION WE HAVE TO TRAVERSE THE LIST TILL (POSITION-1) PLACE
    {
        temp = temp->nextNode;            // LOOP WILL RUN (POSITION-1) TIMES AND THE THE LIST WILL ALSO BE TRAVERSED TILL (POSITION-1) PLACE
        cnt++;
    }

    if(temp->nextNode == NULL){                         // IF WE HAVE TO INSERT IT AT LAST
        insertAtTail(tailOfList,value);
        return;
    }
     
    Node* addNode = new Node(value);               // CREATING THE NEW NODE
   
    addNode -> nextNode = temp -> nextNode;      // POINTING THE ADDED NODE TO THE NEXT NODE OF THE LIST AS THE NODE JUST PREVIOUS TO IT IS
                                                // IS POINTING TO THE NEXT NODE AND AFTER THE LOOP EXECUTION TEMP IS POINTING THE NODE AT (POSITION-1)    
    
    temp -> nextNode = addNode;                // POINTING THE POINTER OF POSITION-1 NODE TO THE ADDED NODE    

       
}


//IF WE HAVE TO DELETE A NODE AT A POSITION
void deleteNode(int position, Node* &headOfList){ 
    
    // IF WE HAVE TO DELETE THE FIRST NODE
    if(position == 1){
        Node* temp = headOfList;                                 // A POINTER WHICH WILL POINT THE NODE SELECTED FOR DELETION
        headOfList = headOfList -> nextNode;                    // UPDATING THE HEAD OF THE LIST AS THE NODE SELECTED FOR DELETION IS THE FIRST NODE
        delete temp;                                           // DELETING THE NODE USING THE POINTER
    }

    //IF WE HAVE TO DELETE ANY NODE OF THE LIST
    else{
        Node* currentNode = headOfList;                     // BY USING TWO POINTERS WE WE WILL REACH UPTO THE DELETING NODE AND A NODE JUST BEFORE THE IT
        Node* prevNode = NULL;

        int cnt = 1;
        while (cnt < position)                             // TRAVERSING THROUGH THE LINKED LIST USING THE LOOP
        {
            prevNode = currentNode;
            currentNode = currentNode -> nextNode;
            cnt++;
        }

        prevNode -> nextNode = currentNode -> nextNode;   // POINTING THE NODE JUST BEFORE THE DELETING NODE TO THE NODE JUST AFTER THE DELETING NODE 
        
        delete currentNode;                             // NOW CURRENT NODE POINTER HAS REACHED UPTO THE NODE WHICH HAVE TO BE DELETED SO JUST DELETE IT   
        
    }
}



int main(){
    
    Node* firstNode = new Node(15);          // FIRST NODE = HEAD NODE
//  Node* firstNode = NULL;                 // IF THE LIST IS EMPTY

    cout<<"HEAD OF LIST "<<firstNode ->data<<endl;           // ACCESSING THE DATA MEMBERS OF THE HEAD NODE 
    cout<<"TAIL OF LIST "<<firstNode ->nextNode<<endl;      // ACCESSING THE DATA MEMBERS OF THE HEAD NODE

     Node* headOflist = firstNode;                // CREATING A POINTER WHICH POINTS THE HEAD OF THE LINKED LIST
    insertAtHead(headOflist,20);
    insertAtHead(headOflist,25);
    insertAtHead(headOflist,30);

    print(headOflist);

    Node* tailoflist = firstNode;           // CREATING A POINTER WHICH POINTS THE TAIL OF THE LINKED LIST
    insertAtTail(tailoflist,10);
    insertAtTail(tailoflist,5);
    insertAtTail(tailoflist,0);
   
    print(headOflist);

    insertAtPosition(headOflist,tailoflist, 3, 22);
    print(headOflist);
    cout<<"HEAD OF LIST "<<headOflist ->data<<endl;
    cout<<"TAIL OF LIST "<<tailoflist ->nextNode<<endl;

    deleteNode(4, headOflist);
    print(headOflist);
    cout<<"HEAD OF LIST "<<headOflist ->data<<endl;
    cout<<"TAIL OF LIST "<<tailoflist ->nextNode<<endl;

    return 0;

}