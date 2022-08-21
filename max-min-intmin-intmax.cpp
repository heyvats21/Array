#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter value of n: "<<endl;
    cin>>n;

    int arr[n];
    INT_MIN,INT_MAX;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]>INT_MAX){
            arr[i]=INT_MAX;
        }
    }

    cout<<"Max value  is: "<<arr[i];
}