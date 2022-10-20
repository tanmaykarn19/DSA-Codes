#include<bits/stdc++.h> 
#include<climits>

using namespace std; 

int main(){
    int n; 
    cout<<"enter length of the array:"<<endl; 
    cin>>n; 
    int arr[n];
    int maxno = INT_MIN; 
    int minno = INT_MAX; 

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        maxno=max(maxno,arr[i]); 
        minno=min(minno,arr[i]); 
    }

    cout<<maxno<<endl; 
    cout<<minno<<endl;

}