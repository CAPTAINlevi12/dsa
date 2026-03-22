//-----------------------------printing the number of stars given by number of columns and rows---------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// {
// int i;
// int j;
// int n;

// cout<<"enter the number of rows and column you want"<<endl;
// cin>>n;


// for(i=0;i<n;i++)  {

//    for(j=0;j<n;j++) {
//     cout<<"*";
//    }
//    cout<<endl;
//    }

//     return 0;
// }
//---------------------------------printing the number in continous manner_____________________________________
// #include <iostream>
// using namespace std;
// int main(){
// int i;
// int j; 
// int num=1;
// int n;
// int k;
// cout<<"enter the number of rows you want"<<endl;
// cin>>n;
// cout<<"enter the number of columns you want"<<endl;
// cin>>k;

// for(i=0;i<n;i++){
//     for(j=0;j<k;j++){
//         cout<<num<<" ";
//         num++;

//     }
//     cout<<endl;
// }


//     return 0;

// }
//---------------------THE TRIANGLE PATTERN----------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//  int n;
//  int i;
//  int j;
//  cout<<"enter the number of columns you want"<<endl;
//  cin>>n;
//  for(i=0;i<n;i++){
//     for(j=0;j<i+1;j++){
//         cout<<"*"<<" ";

//     }
//     cout<<endl;
//  }
 

//

// return 0;
// }

//-------------------------------------- triangle pattern for numbers---------------
// #include<iostream>
// using namespace std;
// int main (){
// int a,j;
// int b;
// int i;
//  int n=4;
//  int sum=1;

// for (i=0;i<n;i++){
//     for(j=0;j<i+1;j++){
//         cout<<sum;
//     }
//     cout<<endl;
//     sum=sum+1;
// }

// return 0;
// } 
//----------------------------------------------the reverse patterns------------------------------------------------------------
// #include<iostream>
// using namespace std;
// // int main(){
// int i;
// int n=4;
// int j;
// int num=1;
// for(i=0;i<n;i++){
//     for(j=0;j<i+1;j--){
//         cout<<num;
//     }
//     num++;
//     cout<<endl;
// }


//     return 0;
// }
// #include<iostream>
// using namespace std;
//  int main(){
// int n=4;
// int i;
// int j;
// for(i=0;i<n;i++){


//     for(j=i+1;j>0;j--){
//         cout<<j;
//     }
//     cout<<endl;
// }

// return 0;
//  }
//-----------------------------------------------------the inverted triangle pattern----------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
// int i,j;
// int num=1;
// int n=4;   
//   for(i=0;i<n;i++){
//     for(j=n-i;j>0;j--){
//     cout<<num;
// }
// num++;
// cout<<endl;
//   }



// }
 //-------------------------------very important one----------------------------------------------

//-----------------------------------------the inverted triangle problem-------------------------
// #include<iostream>
// using namespace std;
// int main(){
// int i,j;
// int n=4;
// int k;
// int num=1;
// for(i=0;i<n;i++){
//     for(j=0;j<i;j++){
//         cout<<" ";
//     }
//     for(k=n-i;k>0;k--){
//         cout<<num;
//     }
//     num++;
//     cout<<endl;
// }

//     return 0;
// }
//---------------------------the pyramid problem--------------------------------
// #include<iostream>
// using namespace std;
// int main(){
// int i,j;
// int n=40;
// int k;
// int l;

// for(i=1;i<=n;i++){
//    for(j=0;j<n-i;j++){
//     cout<<" ";
//    }
//    int num=1;
//    for(k=0;k<i;k++){
//     cout<<num;
//     num++;
//    }
//    for(l=i-1;l>0;l--){
//     cout<<l;
//    }   
   
   
//    cout<<endl;

// }



//     return 0;
// }                                 --------------------VVIP-------------------------
 //-------------------------the hollow diamond star pattern---------------------------------------------------
//  #include<iostream>
//  using namespace std;
//  int main(){
// int i;
// int n=4;
// int j;
// int k; 
// int l;
// //----upper loop
// for(i=0;i<n;i++){
    
//     for(j=0;j<n-i-1;j++){

//         cout<<" ";      
//     }
//     cout<<"*";
    
//     for(k=0;k<2*i-1;k++){
//         cout<<" ";
//     }
//     if(i!=0){
//     cout<<"*";}   
//     cout<<endl;
    
//     }
//     //--------------lower loop
//     for(i=0;i<n-1;i++){
//         for(l=0;l<i+1;l++){
//             cout<<" ";
//         }
//          cout<<"*";
//      for(j=0;j<2*(n-2-i)-1;j++){
//         cout<<" ";
//      }
//      if(i!=2){
//      cout<<"*";}
//         cout<<endl;
//     }
//     return 0; 
//  }

 //-------------------vvip---------------------------------------------
 //--------------------the butterfly pattern---------------------------------------------------------------------
//  #include<iostream>
//  using namespace std;
//  int main(){
// int i;
// int j;
// int n=4;
// int k;
// int l;
// for(i=0;i<n;i++){

//     for(j=0;j<i+1;j++){

//         cout<<"*";
//     }
//     for(k=0;k<2*(n-i-1);k++){
//         cout<<" ";
        

//     }
//     for(l=0;l<i+1;l++){
//         cout<<"*";

//     }
//     cout<<endl;
// }

// for(i=0;i<n;i++){

//     for(j=0;j<n-i;j++){
//         cout<<"*";
//     }
//     for(k=0;2*i>k;k++){
//         cout<<" ";
//     }
//     for(l=0;l<n-i;l++){
//         cout<<"*";
//     }


//     cout<<endl;
// }
 

//    return 0;
//  } 
