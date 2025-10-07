#include<iostream>
#include<list>
#include<vector>
#include<deque>
#include<map>
using namespace std;


int main(){



// list<int> a;

// a.emplace_back(3);
// a.push_front(5);
// //can be initialised same as the vector

// a.pop_front();


// for(int val:a){


//     cout<<val;
// }


deque<int>d={1,2,3};



//allows random access of elements from the array unlike the list 

// for(int i=0;i<d.size();i++){



//     cout<<d[i];
// }





//pair

// can be done as nested oaur also

// pair <int,char>p={1,'a'};
// pair<int ,pair<char,int>>p;


// cout<<p.first<<p.second<<endl;


// vector<pair<int,char>>a={{2,'a'},{3,'b'}};

// a.push_back({3,'n'});
// a.emplace_back(4,'n');

map<string,int>m;

m["tv"]=100;



    return 0;


}