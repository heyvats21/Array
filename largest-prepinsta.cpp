#include<bits/stdc++.h>
using namespace std;
// Find Largest element in an array :

int main(){
    int arr[]={2,9,7,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int larger=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>larger){
            larger=arr[i];
        }
    }
    cout<<"Larger value is: "<<larger;
}