//Method 2 using map
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    int arr[]={10, 30, 10, 20, 40, 20, 50, 10}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    //30 40 50
    map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second==1){
            cout<<it->first<<" ";
        }
    }
}










//Method 1
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={10, 30, 10, 20, 40, 20, 50, 10};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     sort(arr,arr+n);

//     for(int i=0;i<n;i++){
//         int count=1;

//         while(i<n-1 && arr[i]==arr[i+1]){
//             i++;
//             count++;
//         }

//         if(count==1){
//             cout<<arr[i]<<" ";
//         }
//     }
// }