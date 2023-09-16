#include<iostream>
using namespace std;

class queue{
    int* arr;
    int frontel;
    int size;
    int rear;

    public:
    queue(int n){
        arr = new int[n];
        frontel = 0;
        rear = 0;
        size = n;
    }

    void push(int n){

        if(rear == size){
            cout<<"Queue is Full!"<<endl;
        }

        arr[rear] = n;
        rear++;
    }

    int pop(){
        if(frontel == rear){
            arr[frontel] = -1;
        }
        else{
            int ans = arr[frontel];
            arr[frontel] = -1;
            frontel++;
            if(frontel == rear){
                rear = 0;
                frontel = 0;
            }
            return ans;
        }
    }

    int front(){
        if(frontel == rear){
            return -1;
        }
        else{
            return arr[frontel];
        }
    }

    bool isEmpty(){
        if(frontel == rear){
            return true;
        }
        else{
            return false;
        }
    }

};   

int main(){

    queue q(50);

    q.push(10);
    q.push(12);
    q.push(14);
    q.push(16);
    q.push(18);
    q.push(20);

    cout<<q.front()<<endl;

    q.pop();

    cout<<q.front()<<endl;

    cout<<q.isEmpty();


    return 0;
     
}