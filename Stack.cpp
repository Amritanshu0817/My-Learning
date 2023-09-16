#include<iostream>
using namespace std;
#include<stack>

int main(){
    
    stack<int> st;
    st.push(22);
    st.push(24);
    st.push(45);
    st.push(54);
    
    cout<<st.top()<<endl;

    cout<<"Size of stack is = "<<st.size()<<endl;

    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    st.pop();
    cout<<"After one pop top = "<<st.top()<<endl;
    st.pop();
    cout<<"After two pop top = a "<<st.top()<<endl;

    return 0;
}