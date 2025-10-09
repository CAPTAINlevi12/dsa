//the basic palindrome 

#include<iostream>
#include<string>

using namespace std;



bool ispalindrome(string s){
 bool  a = true;
int start=0;
int end=s.size()-1;

   while(start<end){

    if(!isalnum(s[start]))
    {
        start++;
        continue;
    }
    if(!isalnum(s[end])){


        end--;
        continue;
    }


    if(tolower(s[start])==tolower(s[end])){

        start++; 
        end--; 
    } 
    
    else{ 
        return a=false;

    }

   
}

   return a;



}
int main(){


    string s="A man, a plan, a canal: Panama";

int a=ispalindrome(s);

if(a==0){

    cout<<"THE GIVEN STRING IS NOT A PALINDROME"<<endl;
}
else{
    cout<<"THE GIVEN STRING IS A PALINDROME"<<endl;
}







    return 0;
}