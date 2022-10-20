#include<iostream>
#include<math.h> 
using namespace std;

int sum(int n){
    int ans = 0; 
    for(int i=1;i<=n;i++){
        ans+=i; 
    }
    return ans; 
}

bool check(int x, int y, int z){
    int a = max(x,max(y,z));
    int b, c; 
    if (a==x){
        b=y; 
        c=z; 
    }
    else if (a==y){
        b=x;
        c=z;
    }
    else{
        b=x; 
        c=y;
    }
    if(a*a == b*b + c*c){
        return true; 
    }
    else return false; 
}

int main(){
    //sum of first n natural numbers:: 

    // int n; 
    // cin>>n; 

    // cout<<sum(n)<<endl; 

    //check pythagorean triplet:: 

    int x,y,z; 
    cin>>x>>y>>z; 

    if(check(x,y,z)){
        cout<<"it is triplet"<<endl;
    }
    else{
        cout<<"it is not"<<endl; 
    }


    return 0;
}