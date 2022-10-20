#include<iostream>
using namespace std; 

//rows: 1 to n
//col: 1 to row no. 
//elements: when (row+col) is even, print 1, else 0. 

int main(){
    int n; 
    cin>>n; 

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}