#include<bits/stdc++.h>
using namespace std; 

int binarySearch(int arr[], int n, int key){
    int s=0; 
    int e=n; 
    while (s<=n){
        int mid = (s+e)/2; 
        if(arr[mid]==key){
            return mid; 
        }
        else if(arr[mid]>key){
            e=mid-1; 
        }
        else if(arr[mid]<key){
            s=mid+1;
        } 
    }

    return -1; 

}

int main(){
    int n; 
    // cout<<"enter length of array"<<endl; 
    cin>>n; 
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }

    int key;
    // cout<<"enter the key to be searched"<<endl;
    cin>>key; 

    cout<<binarySearch(arr,n,key)<<endl; 
 
    return 0; 

    //time complexity of Binary search is O(log(n)). 
}
