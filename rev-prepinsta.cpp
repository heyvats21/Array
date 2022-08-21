#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={9,5,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"original array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

// METHOD 1
    // cout<<"reverse an array"<<endl;
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i];
    // }


// METHOD 2
    reverse(arr,arr+n);
    cout<<"reversed array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}