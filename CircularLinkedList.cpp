#include<iostream>
using namespace std;

class Node{

    public: 
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

};

// CALLING BY VALUE WILL NOT AFFECT THE TAIL
void print(Node* tail){

    Node* temp = tail;
    cout<<"List = ";

// IF THE LIST IS EMPTY THEN THE NODE POINTER MUST POINTING TO NULL
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do{
        cout<<tail->data<<" ";
        tail = tail ->next;    // TRAVERSING THE LIST 

    } while (tail != temp);   //  THE LIST WILL BE TRAVERSED UNTIL THE VALUE IS GETTING REPEATED

    cout<<endl;

// DO-WHILE LOOP IS USED HERE BECAUSE IT WILL PRINT THAT LIST ALSO WHICH HAVE ONLY ONE NODE

}

void insert(Node* &tail, int ele, int val){     
    // AS THE LINKEDLIST IS CIRCULAR SO WE CANNOT ADD ANY ELEMENT AT ANY PARTICULAR INDEX AS THERE IS NO STARTING OR ENDING POINT 
    // IN THIS METHOD OF INSERTION WE INSERT A NODE AFTER A PARTICULAR ELEMENT PRESENT IN THE LIST
    // WE ARE ASSUMING THAT THE ELEMENT IS PRESENT IN THE LIST OR THE LIST IS EMPTY

 // IF THE LIST IS EMPTY THEN THE NODE POINTER MUST POINTING TO NULL
    if(tail == NULL){
        Node* addNode = new Node(val);    // CREATING THE NODE

        addNode -> next = addNode;       //  AS IT IS CIRCULAR HAVING ONLY ONE NODE SO ITS NEXT NODE MUST POINT TO ITSELF

        tail = addNode;                 //   UPDATING THE TAIL OF THE LIST

        cout<<addNode->data<<" added"<<endl;

    }

    else{
        Node* temp = tail;       // NODE POINTER FOR REFRENCE 
        
        while(temp -> data != ele){       // TRAVERSING THE LIST UNTIL WE REACH THE ELEMENT AFTER WHICH WE HAVE TO INSERT THE NODE      
            temp = temp -> next;    
        }

        Node* addNode = new Node(val);      // CREATING A NODE OF GIVEN DATA

        addNode -> next = temp -> next;
        temp -> next = addNode;
        // TEMP IS POINTING THE NODE AFTER WHICH NEW NODE WILL BE INSERTED 
        // ADDED NODE WILL POINT WILL TO ITS NEXT NODE AND THAT LOCATION IS STORED IN NEXT OF TEMP
        // NOW THE ADDED NODE WILL POINT TO THE NEXT NODE AND THE NODE JUST BEFORE IT WILL POINT THE ADDED NODE

        cout<<addNode->data<<" added"<<endl;

    }
}

void deleteNode(Node* &tail, int value){
     // AS THE LINKEDLIST IS CIRCULAR SO WE CANNOT DELETE ANY ELEMENT AT ANY PARTICULAR INDEX AS THERE IS NO STARTING OR ENDING POINT 
     // IN THIS METHOD OF DELETION WE DELETE A NODE OF PARTICULAR VALUE
     // WE ARE ASSUMING THAT THE NODE IS PRESENT IN THE LIST OR THE LIST IS EMPTY

     bool flag = false;

 // IF THE LIST IS EMPTY THEN THE NODE POINTER MUST POINTING TO NULL 
    if(tail == NULL){
        cout<<"List is empty";
        return;
    }

    else{
       
        Node* prev = tail;                     // NODE POINTER FOR REFRENCE

        Node* curr = prev -> next;            // NODE POINTER FOR TRAVERSING

        while (curr -> data != value)       // LOOP WILL TRAVERSE THE LIST UNTIL THE VALUE
        {
            prev = curr;       
            curr = curr -> next;
        }

        prev -> next = curr -> next;      
    // THE NODE JUST BEFORE THE NODE HAVING THE DELETION VALUE WILL NOW POINT TO THE NODE JUST AFTER THE DELETING NODE

        if(curr == prev){
            tail = NULL;
        }
    // IF THE LIST IS HAVING ONLY ONE NODE THEN THE NODE HAVING THE DELETION VALUE AND THE NODE JUST BEFORE IT WILL BE SAME
    // UPDATE ITS TAIL TO NULL AS IT WILL NOT CONTAIN ANY NODE AND THE LIST WILL BE EMPTY

        else if(tail == curr){
            tail = prev;
           flag = true;
        }
    // IF THE LIST IS HAVING MORE THAN ONE NODE THEN THE TAIL NODE IS GOING TO BE DELETED
    // FOR DELETING TAIL NODE WE HAVE TO UPDATE THE TAIL FIRST

        curr -> next = NULL;          // DELETING NODE WILL NOW POINT TO NULL FOR DELETION

        cout<<curr->data<<" Deleted"<<endl;
        if(flag == true){
            cout<<"Now Tail is "<<tail->data<<endl;
        }

        delete curr;           // AFTER GOING THROUGH ALL THIS HERE THE NODE WILL BE DELETED
        
    }
}


int main(){

// AS IT IS A CIRCULAR LINKED LIST THEN THERE IS NO STARTING OR ENDING POINT SO WE ONLY USE A SINGLE POINTER FOR ALL OPERATIONS 
    Node* tail = NULL;                // POINTER WHICH POINTS THE NODE OF THE LINKED LIST 

    insert(tail, 5, 4);
    print(tail);
    
    insert(tail, 4, 7);
    print(tail);
      
    insert(tail, 7, 3);
    print(tail);
   
    insert(tail, 3, 5);
    print(tail);
    
    insert(tail, 5, 11);
    print(tail);

    deleteNode(tail, 4);
    print(tail);
    
    deleteNode(tail, 3);
    print(tail);


    return 0;
}
