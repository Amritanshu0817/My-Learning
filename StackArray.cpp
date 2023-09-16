// IN THIS METHOD WE WILL CREATE STACK USING CLASS AND IMPLEMENT IT USING ARRAY

#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;          // ARRAY FOR IMPLEMENTING STACK

    int arrayindex;     // ARRAY INDEX FOR IMPLEMENTATION

    int sizeofstack;    // SIZE OF THE STACK
    
    
    // CONSTRUCTOR CALLED FOR CREATING A STACK
    Stack(int size){              

        this -> sizeofstack = size;     // ALLOCATING THE SIZE OF STACK TO INPUT SIZE

        arr = new int[sizeofstack];     // CREATING THE STACK ARRAY OF SIZE ENTERED

        arrayindex = -1;   // ASSING THE ARRAY INDEX AS -1 BECAUSE IT HAS TO TRAVERSE FROM 0 TO SIZE-1
    }


    // PUSHING AN ELEMENT IN STACK 
    void push(int element){                   

        if(sizeofstack - arrayindex > 1){          // CHECKING IF SPACE IS AVAILABE OR NOT
        
        // IF ENTERED HERE THEN ATLEAST ONE EMPTY SPACE IS IN THE ARRAY 

            arrayindex++;                  // INCREMENTING IT AS WE HAVE TO INSERT THE ELEMENT IN ARRAY

            arr[arrayindex] = element;       // ALLOACTING THE MEMORY OF ARRAY TO THE  ELEMNT

            cout<<element<<" Pushed Succesfully!"<<endl;

        }
        else{

            cout<<"Stack overflow! ";
            cout<<"Element "<<element<<" can't be inserted"<<endl;

        }
    }

    // POPING ELEMENT FROM STACK (LIFO)
    void pop(){

        if(arrayindex >= 0){             // CHECKING IF THERE ANY ELEMENT PRESENT OR NOT

            arrayindex--;               // DECREMENTING IT AS THERE IS ANOTHER VACCANT SPACE IN ARRAY

            cout<<"Poped Succesfully!"<<endl;

        }
        else{

            cout<<"Stack Underflow! Nothing to Pop"<<endl;

        }
    }

    // PRINITNG THE TOP VALUE OF STACK
    void top(){

        if(arrayindex >= 0){         // CHECKING IF THERE ANY ELEMENT PRESENT OR NOT

            cout<<"Top = "<<arr[arrayindex]<<endl;

        }
        else{

            cout<<"Stack is empty!"<<endl;

        }
    }

    // CHECKING THE STACK IS EMPTY OR NOT
    bool isEmpty(){             

        if(arrayindex == -1){      // CHECKING IF THERE ANY ELEMENT PRESENT OR NOT

            return true;

        }
        else{
            
            return false;
        
        }
    }


};

int main(){
    
    Stack stack(5);
    stack.push(12);
    stack.push(13);
    stack.push(14);
    stack.push(15);
    stack.push(16);
    // stack.push(17);                // FOR ELSE CONDITION

    stack.top();

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    // stack.pop();                  // FOR ELSE CONDITION

    // stack.top();                 // FOR ELSE CONDITION

    if(stack.isEmpty()){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Stack is not empty!"<<endl;
    }

    return 0;
}