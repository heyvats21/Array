#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,8,7,5,5,7,8,10,5};
    int i;
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);  //5 5 5 5 7 7 8 8 10 
    for(int i=0;i<n;i++){
        int count =1;
        while(arr[i]==arr[i+1]){       //if = one time condition & while does till the condition is true
            i++;
            count++;
        }

        cout<<arr[i]<<":"<<count<<endl;
    }
    
}




























