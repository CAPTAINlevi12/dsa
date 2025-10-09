#include<iostream>
#include<String>
using namespace std;


//--------leetcode 110------------------------------------------------
    string remove(string s ,){

       string part="abc";

       while(s.length()>0&&s.find(part)<s.length()){
 
        int a =s.find(part);

       s.erase(a,part.length());

       }

return s;

    }

int main(){

string a="daabcbaabcbc";

a=remove(a);

cout<<"the final string is---- "<<a<<endl;

    return 0;
}