#include<iostream>
using namespace std; 

//rows: 1 to n
//coloumns: n+1 - row no. 
//elements: col number (j)

int main(){
    int n; 
    cin>>n; 

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl; 
    }
}