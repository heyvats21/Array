#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter how much number you wanna enter in array"<<endl;
    cin>>n;
    int arr[n];
    int smaller=INT_MAX;
    cout<<"Enter values in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"values are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]<smaller){
            smaller=arr[i];
        }
    }

    cout<<"Smallest element in an array is: "<<smaller;


}