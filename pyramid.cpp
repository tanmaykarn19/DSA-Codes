#include<iostream>
using namespace std; 

//inverted half pyramid 

// int main(){
//     int n; 
//     cout<<"enter n value"<<endl; 

//     cin>>n; 

//     for (int i=n; i>=1; i--){
//         for (int j=1; j<=i; j++){
//             cout<<"*"; 
//         }
//         cout<<endl; 
//     }
// }

// half pyramid after 180 degree rotation 

int main(){
    int n; 
    cout<<"enter n value"<<endl; 
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<" "; 
            }
            else{
                cout<<"*"; 
            }
        }
        cout<<endl; 
    }

    
}

// half pyramid using numbers 

// int main(){
//     int n; 
//     cin>>n; 

//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }