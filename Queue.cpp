#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    queue<int> q;
    q.push(5);
    q.push(7);
    q.push(4);
    q.push(9);
    q.push(3);
    
    cout<<"Front of Queue is = "<<q.front()<<endl;
    cout<<"Size of Queue is = "<<q.size()<<endl;

    q.pop();
    cout<<"Poped Succesfully!"<<endl;
    cout<<"Front of Queue is = "<<q.front()<<endl;
    cout<<"Size of Queue is = "<<q.size()<<endl;

    q.pop();
    cout<<"Poped Succesfully!"<<endl;
    cout<<"Front of Queue is = "<<q.front()<<endl;
    cout<<"Size of Queue is = "<<q.size()<<endl;

    q.pop();
    cout<<"Poped Succesfully!"<<endl;
    cout<<"Front of Queue is = "<<q.front()<<endl;
    cout<<"Size of Queue is = "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        cout<<"Queue is not empty!"<<endl;
    }
    


    return 0;

}