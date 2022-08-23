// ************************************22-8-22    && 23-8-22 
//Frequency of elements in an array
//Method 1
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





//Method 2

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    int arr[]={30,20,30,40,40};
    int n=sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> umap;
    for(int i=0;i<n;i++){
        umap[arr[i]]++ ;         //it will count the value how much time
    }

    for(auto it=umap.begin();it!=umap.end();it++){
        cout<<it->first<<":"<<it->second<<endl;   // use it->first & it->second
    } 
}




























