#include<iostream>
using namespace std; 

int main(){
    // int i=1; 
    // i = i++ + ++i;
    // cout<<i<<endl;

    int a = 5, b = 5; 

    cout<<(a==b)<<endl; 
    cout<<(a<b)<<endl;
    cout<<(a!=b)<<endl;
    a = ++a; 
    b = --b; 
    cout<<"after increment in a and decrement in b:"<<endl; 
    cout<<(a==b)<<endl; 
    cout<<(a<b)<<endl;
    cout<<(a!=b)<<endl;

}