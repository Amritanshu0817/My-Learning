#include <iostream>

using namespace std;
void fun1(int p){
    int n;
    p=n;
	if (n>0)
    fun1(n-1);
    cout<<n;
   // fun1(p-1);
}
int main(){

    int n;
    
    fun1(3);
    return 0;
}
