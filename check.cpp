#include<iostream>
#include<string>
 using namespace std;
  
 void isPalindrome(string s) {
         for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=65 && s[i]<=90)
            s[i] = s[i]+32;
        }
        int y,x = 0;
        string *s1 = new string[s.size()];
          while(y < s.size())
        {
            if(s[y]>=97 && s[y]<=122)
            {
                s1->at(x)=s[y];
                x = x+1;
                y = y+1;
            }
            else {
                y = y+1;
            }
        }
        for(int i=0; i<s1->length(); i++){
        	cout<<s1[i]<<endl;
		}
        int a = s1->length()-1;
        for(int z=0; z<a/2; a++){
            if(s1->at(a) != s1->at(a-z)){
                //return false;
            }
        }
       // return true;
    }
    
    
    int main() {

    string	s = "race a car";
//	getline(cin, s);
//	cout<<"The enterned string is "<<s<<endl;
	isPalindrome(s);
	cout<<"length string"<<s.length()<<endl;
	cout<<s[2]<<endl;
//	cout<<isPalindrome(s);
	return 0;
}
