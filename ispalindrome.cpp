#include <iostream>
using namespace std;

    bool isPalindrome(string s) {
      //  string *s1 = new string[s.size()];;
        string s1 = ""+s;
        //cout<<s1<<endl;
        //cout<<sizeof(s[3])<<endl;
        //cout<<s[0]<<endl;
        //cout<<s1<<endl;
        int x , y = 0;
       
        for(int i=0; i<s.size(); i++)
        {
            if(s1[i]>=65 && s1[i]<=90)
            s1[i] = s1[i]+32;
        }
     //   cout<<s1<<endl;
        string s2[s.length()];
         while(y < s.size())
        {
            if(s1[y]>=97 && s1[y]<=122)
            {
                s2[x]=s1[y];
                x = x+1;
                y = y+1;
            }
            else {
                y = y+1;
            }
        }
       //cout<<"x="<<x<<endl;
       //cout<<"y="<<y<<endl;
        for(int j=0,k=s.size()-1; j<k; j++,k--)
        {
            if(s1[j] != s1[k]){
            	//cout<<"false";
             return false;   
            }
        }
        //cout<<"true";
      return true;
    }


int main() {

    string	s = " ";
//	getline(cin, s);
//	cout<<"The enterned string is "<<s<<endl;
	//cout<<isPalindrome(s);
	cout<<"length string"<<s.length()<<endl;
	cout<<isPalindrome(s);
	return 0;
}

