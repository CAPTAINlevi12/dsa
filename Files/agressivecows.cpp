#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;



 bool ispossible(vector <int> a,int c,int n ,int mid){

    //sort
    sort(a.begin(),a.end());
  int cow=1;

    int start=a[0];

    for(int i=0;i<n;i++){
        if(a[i]-start>=mid){
            start=a[i];
            cow++;

        }
        if(cow==c){
            return true ;

        } 
    }
    return false;
    


 }


   int  minlargestdistance( vector <int>a,int c,int n){
    


    int start=1;
    int end=a[n-1]-a[0];
    int ans=-1;
    while(start<=end){
        
        int mid=start+(end-start)/2;
       
        if(ispossible(a,c,n,mid)){

        

        // check if the mid is valid or not if valid 
      ans=mid;
      start=mid+1;
        } else{

      //if not a valid answer

      end=mid-1;
        }



    
    }
    return ans;




   }
   int main (){

    vector <int> a={1, 3, 5, 9, 15};
    int n=5;
    int c=3;
    cout<<"the min cow stall distance is "<<minlargestdistance(a,3,5)<<endl;







    return 0;
   }