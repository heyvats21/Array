//sort 1 in ascending order  && and another in descending order
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]={1, 2, 6, 3, 7};
    int arr2[]={10, 7, 45, 3, 7};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int product=0;
    sort(arr1,arr1+n);   //increasing order     1 2 3 6 7
    sort(arr2,arr2+n,greater<int>()) ; //decreasing order   45 10 7 7 3

    for(int i=0;i<n;i++){
        product=product+arr1[i]*arr2[i];
    }

    cout<<product;

    
}