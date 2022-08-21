//Min and Max element in an array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={2,4,6,5,3},i;
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<"enter size of array";
    // cin>>n;
    // cout<<"Enter the values of array: "<<endl;
    // for(int i=0;i<n;i++){

    //     cin>>arr[i];
    // }
    
    int min_element=arr[0];
    int max_element=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max_element){
            max_element=arr[i];
           
        }
         if(arr[i]<min_element){
            min_element=arr[i];
           
        }
    }
     
    cout<<"Max element of array is: "<<max_element;
    cout<<"Min element of array is: "<<min_element;

}































// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // int arr[5]={1,2,3,4,5};
//     //if sorted
//     // cout<<"The min element is: "<<arr[0]<<endl;
//     // cout<<"The max element is: "<<arr[4]<<endl;

//     //if not sorted 
//     int arr[]={6,32,1,8,4};

//     int n=sizeof(arr)/sizeof(arr[0]);

//     sort(arr ,arr+n);
//     // for(int i=0;i<5;i++){
//     //     cout<<arr[i]<<" ";
//     // }

//     cout<<"Max element is "<<arr[0];
//     cout<<"Min element is "<<arr[4];



// }