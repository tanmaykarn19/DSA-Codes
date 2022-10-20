#include<iostream>
using namespace std; 

/*rows: 1 to n; 
cols: cols will have three parts. first is the space which will be 
1 to n-row no. then print the numbers in decreasing order till 1, then
in the increasing order. */

int main(){
    int n; 
    cin>>n; 

    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<"  "; 
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";

        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }

}