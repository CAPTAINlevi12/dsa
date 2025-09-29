// container with most water the brute force approach

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int mostwater(vector<int>a){
    int maxwater=0;

     for(int i=0;i<a.size();i++){


        for(int j=i+1;j<a.size();j++){

           int  containerwidth=j-i;
           int  containerheight=min(a[j],a[i]);
            maxwater=max(maxwater,containerwidth*containerheight);



        }
     }
     return maxwater;

}

int main(){  

vector<int> a={1,8,6,2,5,4,8,3,7};
cout<<"container filled with most water is  "<<mostwater(a)<<endl;




    return 0;
}
// leetcode problem 11 