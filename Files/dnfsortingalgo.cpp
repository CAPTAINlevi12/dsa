// #include<iostream>
// #include<algorithm>
// #include<vector>

// using namespace std;


// vector <int> sortingalgo(vector <int> a,int n){

//     int count0=0;
//     int count1=0;
//     int count2=0;


//     for (int i=0;i<n;i++){
//         if(a[i]==0){
//             count0++;}

//            else if(a[i]==1){
//             count1++;


//             }
//             else{
//                 count2++;
//             }        
//  }    int index=0;
//          for(int i=0;i<count0;i++){
//             a[index++]=0;}

//             for(int i=0;i<count1;i++){
//                 a[index++]=1;
//             }
//             for(int i=0;i<count2;i++){

//                 a[index++]=2;
//             }

//             return a;





//          }
//  int main(){
    
// vector <int> a={2,0,2,1,1,0}; 
// int n=a.size();

// a=sortingalgo(a,n);


// for( int i=0;i<n;i++){

//     cout<<a[i]<<endl;
// }


// return 0;
//          }


//------the dnf sorting algo-----------------------------------------------------
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


vector<int> dnf(vector <int> a,int n){

int low=0;
int high=n;
int mid=0;

while(mid<=high){

    if(a[mid]==0){

      swap(a[mid],a[low]);
      low++;
      mid++;


    }
    else if(a[mid]==1){
        mid++;
        
    }
    else{
        swap(a[high],a[mid]);
        high--;
    }



}

return a;

}

int main()
{
    vector <int>a={2,0,2,1,1,0,1,2,0,0};
    int n=a.size();

    a=dnf(a,n);

for(int i=0;i<n;i++){

    cout<<"the sorted vector using dnf is "<<a[i]<<endl;
}


    return 0;

}