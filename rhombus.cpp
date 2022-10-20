#include<iostream>
using namespace std; 

//rows: 1 to n; 
//cols: there will be two loops. one for the space, other to cout the star
//for space: n to 1-row no., for star 1 to n; 
//elements: *

int main(){
    int n; 
    cin>>n; 

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0; 
}