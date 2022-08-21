#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={3, 2, 4, 1, 10, 30, 40, 20};

    // 1 2 3 4 10 20 30 40
    // 1 2 3 4 40 30 20 10
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);

    for(int i=0;i<n/2;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=n-1;i>=n/2;i--){
        cout<<arr[i]<<" ";
    }
}