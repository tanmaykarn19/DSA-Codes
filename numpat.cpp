#include<iostream>
using namespace std; 

/* rows: 1 to n
cols: space will be equal to n-row no. (1 to n-row no.)
to print the number in the row starting with 1 to that row number. 
the iterator will be printed in the respective rows. */

int main(){
    int n; 
    cin>>n; 

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}