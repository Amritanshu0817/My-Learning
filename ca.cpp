#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Info{
    private:
    string name;
    int roll;
    float cgpa;
    
    public:
    void getdata();
    void setdata(){
        cout<<"etn"<<endl;
        getline (cin, name);
        cout<<"etr"<<endl;
        cin>>roll;
        cout<<"Enter the cgpa"<<endl;
        cin>>cgpa;
        clrscr();
    }
};
 
 void Info :: getdata(){
     cout<<"n"<<name;
     cout<<"r"<<roll;
     cout<<"c"<<cgpa;
 }
 
 int main(){
     Info s1,s2,s3,s4,s5;
     s1.setdata();
     s2.setdata();
     s3.setdata();
     s4.setdata();
     s5.setdata();
     s1.getdata();
     
     return 0;
 }
