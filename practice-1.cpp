// *************************************************************************22-08-22********************************************

// Q1-) largest element in array 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={14,23,11,56};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int largest=INT_MIN;

//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//         else if(largest>arr[i]){                 **doubt if no else if and if else if ********what is the diff
//             arr[i]=largest;
//         }
//     }

//     cout<<"Largest Element is: "<<largest;
// }



// Q2-) smallest element in an  array 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={14,3,11,56,0};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int smallest=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//         else if(smallest<arr[i]){
//             arr[i]=smallest;
//         }
//     }

//     cout<<"Smallest element is: "<<smallest;
// }





// Q3-)second smallest element in an  array 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={14,23,11,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int smallest=INT_MAX;
    int sec_smallest=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            sec_smallest=smallest;
            smallest=arr[i]; 
            // smallest=arr[i];   *********************doubt if we done this*************
            // sec_smallest=smallest;
        }
        else if(sec_smallest>arr[i]){
            sec_smallest=arr[i];
        }
    }

    cout<<"Second Smallest element is: "<<sec_smallest;
}




// // Q4-)sort half the array in ascending order and another half in descending order
// #include<bits/stdc++.h>
// using namespace std;
// // for condition (depends upon equal to )
// eg- 2 4 6 9 7   or    2 4 9 7 6
// int main(){
//     int arr[]={2,9,7,6,4};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     sort(arr,arr+n);

//     for(int i=0;i<n/2;i++){
//         cout<<arr[i]<<" ";
//     }

//     for(int i=n-1;i>=n/2;i--){
//         cout<<arr[i]<<" ";
//     }
// }
