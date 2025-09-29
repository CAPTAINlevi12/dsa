// #include<iostream>
// #include<vector>

// using namespace std;


// int pmi(vector <int>a){
// int n=a.size();
// int peakindex=0;


// for(int i=1;i<n;i++){

//     if(a[i]>a[i-1]){
//         peakindex=i;

//     }
//     if(a[i]>a[i+1]){
//         return peakindex;

//     }
// }
// return -1;
// }

// int main(){

//     vector <int> a={0,4,5,6,7,8,9,8,7,6,6,5,4};

//     cout<<"pi is  "<<pmi(a)<<endl;



//     return 0;
// }


//-----------------------------the optimised approach the binary approach---------------------------
#include<iostream>
#include<vector>
using namespace std;
int thepeakindex(vector <int> a){
int    end=a.size()-2;
int start= 1;
int mid;

while(start<=end){
     mid=start + (end-start)/2;
    if(a[mid-1]<a[mid]>a[mid+1]){
        mid=start + (end-start)/2;

    }
    if(a[mid-1]<a[mid]){
        start=mid+1;
    }
    else{

        end=mid-1;
    }

}
return end;
{
    return -1;
}

}

int main()
{



    vector <int>a={1,3,4,6,2,1};

    cout<<"the peak index in the provided vector is   "<<thepeakindex(a)<<endl;
    
    
return 0;
}
