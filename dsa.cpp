// #include<bits/stdc++.h>
// using namespace std; 

// void revarray(int arr[], int s, int e){
//     while(s<e){
//         int temp=arr[s]; 
//         arr[s]=arr[e]; 
//         arr[e]=temp; 
//         s++; 
//         e--;
//     }
// }

// void printarray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n; 
//     cin>>n;
//     int arr[n];
// for(int i=0;i<n;i++){
//         cin>>arr[i]; 
//     }

//     printarray(arr,n); 

//     revarray(arr,0,n-1);

//     cout<<"reversed array is:"<<endl; 

//     printarray(arr,n); 


    


    



//     return 0; 
// }


// #include <bits/stdc++.h>
// using namespace std;
 
// /* Function to reverse arr[] from start to end*/
// void rvereseArray(int arr[], int start, int end)
// {
//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }    
 
// /* Utility function to print an array */
// void printArray(int arr[], int size)
// {
//    for (int i = 0; i < size; i++)
//    cout << arr[i] << " ";
 
//    cout << endl;
// }
 
// /* Driver function to test above functions */
// int main()
// {
//     int n; 
//     cin>>n; 
//     int arr[n]; 

//     for(int i=0;i<n;i++){
//         cin>>arr[i]; 
//     }
 
//     // To print original array
//     printArray(arr, n);
     
//     // Function calling
//     rvereseArray(arr, 0, n-1);
     
//     cout << "Reversed array is" << endl;
     
//     // To print the Reversed array
//     printArray(arr, n);
     
//     return 0;
// }


//find max and min element in the array 

// #include<iostream>
// using namespace std; 

// struct Pair{
//     int min; 
//     int max; 
// };

// Pair GetMinMax(int arr[], int n){
//     struct Pair minmax; 
//     int i; 

//     //if only one element in the array, return min and max 
//     //as the same number 

//     if (n==1){
//         minmax.min=arr[0]; 
//         minmax.max=arr[0]; 
//     }
    

//     if (arr[0]>arr[1]){
//         minmax.min=arr[1]; 
//         minmax.max=arr[0];
//     }
//     else{
//         minmax.min=arr[0]; 
//         minmax.max=arr[1];
//     }

//     for(int i=2;i<n;i++){
//         if (arr[i]>minmax.max){
//             minmax.max=arr[i]; 
//         }
//         else if(arr[i]<minmax.min){
//             minmax.min=arr[i];
//         }
//     }
//     return minmax; 
// }

// int main(){
//     int n; 
//     cin>>n; 
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i]; 
//     } 

//     struct Pair minmax = GetMinMax(arr,n); 

//     cout<<"minimum element is: "<<minmax.min<<endl;
//     cout<<"max element is: "<<minmax.max<<endl; 

//     return 0; 

// }

//find the kth smallest element in the array 

// #include<bits/stdc++.h> 
// using namespace std; 

// int main(){
//     int n;
//     int k;  
//     cin>>n; 
//     int arr[n]; 

//     for(int i=0;i<n;i++){
//         cin>>arr[i]; 
//     }

//     cout<<"enter the kth smallest element to be found"<<endl;
//     cin>>k; 

    

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 int temp = arr[j]; 
//                 arr[j] = arr[i]; 
//                 arr[i] = temp; 
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl; 

//     cout<<arr[k-1]<<endl; 


// }

//sort an array having only 0s, 1s, 2s without using any sorting algorithm

// #include<bits/stdc++.h> 
// using namespace std; 

// int main(){
//     int n; 
//     cin>>n;
//     int arr[n];
//     cout<<"enter 0s, 1s and 2s in random order"<<endl; 
//     for(int i=0;i<n;i++){
//         cin>>arr[i]; 
//     }

//     sort(arr, arr+n); 
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";  
//     }

// }

//Move all negative numbers to beginning and positive 
//to end with constant extra space

//using partition process of quicksort

// #include<bits/stdc++.h> 
// using namespace std; 

// void rearrange(int arr[], int n){
//     int j=0; 
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             if(i!=j){
//                 int temp=arr[i]; 
//                 arr[i]=arr[j]; 
//                 arr[j]=temp; 
//             }
//             j++;
//         }
//     }
// }

// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "; 
//     }
// }

// int main(){
//     int n; 
//     cin>>n; 
//     int arr[n]; 
//     for(int i=0;i<n;i++){
//         cin>>arr[i]; 
//     }

//     rearrange(arr,n); 
//     printarray(arr,n); 

//     return 0; 
// }

//using two pointer method: 

// #include<bits/stdc++.h>
// using namespace std; 

// void rearrange(int arr[], int left, int right){
//     while(left<=right){
//         if(arr[left]<0 && arr[right]<0){
//             left+=1; 
//         }
//         else if(arr[left]>0 && arr[right]<0){
//             int temp=arr[left];
//             arr[left]=arr[right]; 
//             arr[right]=temp;
//             left+=1 ;
//             right-=1; 
//         }
//         else if(arr[left]>0 && arr[right]>0){
//             right-=1; 
//         }
//         else{
//             left++; 
//             right--; 
//         }
//     }
// }

// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "; 
//     }
//     cout<<endl; 
// }

// int main(){
//     int n; 
//     cin>>n;
//     int arr[n]; 
//     for(int i=0;i<n;i++){
//         cin>>arr[i]; 
//     }
//     int left=0; 
//     int right=n-1; 

//     rearrange(arr,left,right); 

//     printarray(arr,n); 





// }

//find union of two arrays of length n and m;

//rotate array clock wise direction one time:: 

//rotate an array in clock wise direction one time 

// #include<iostream> 
// using namespace std; 

// void rotate (int arr[], int n){
//     int temp=arr[n-1]; 
//     for(int i=n-1;i>0;i--){
//         arr[i]=arr[i-1]; 
//     }
//     arr[0]=temp; 
// }

// int main(){
//     int n;
//     cin>>n; 
//     int arr[n]; 
//     for(int i=0;i<n;i++){
//         cin>>arr[i]; 
//     }
    
//     rotate(arr,n); 
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "; 
//     }
//     cout<<endl;
    
//     return 0; 
// }

//kadane's algorithm to find max sum of contiguous subarray:: 

// #include<bits/stdc++.h> 
// using namespace std; 

// int maxsum(int arr[], int n){
//     int maxsofar=INT_MIN; 
//     int maxendinghere=0; 

//     for(int i=0;i<n;i++){
//         maxendinghere+=arr[i]; 
//         if(maxsofar<maxendinghere){
//             maxsofar=maxendinghere;
//         }
//         if(maxendinghere<0){
//             maxendinghere=0; 
//         }
//     }
//     return maxsofar; 
// }

// int main(){
//     int n; 
//     cin>>n; 
//     int arr[n]; 

//     for(int i=0;i<n;i++){
//         cin>>arr[i]; 
//     }

//     int ans=maxsum(arr,n); 

//     cout<<ans<<endl; 
// }

//tower minimum heights difference:: 

// #include<bits/stdc++.h>
// using namespace std; 

// int max(int x, int y){
//     return (x>y)?x:y; 
// }

// int minJumps(int arr[], int n){
//     if (n<=1){
//         return 0; 
//     }

//     if(arr[0]==0){
//         return -1; 
//     }

//     int maxReach = arr[0]; 
//     int step = arr[0]; 
//     int jump = 1; 

//     int i=1; 
//     for(i=1;i<n;i++){
//         if(i==n-1){
//             return jump; 
//         }

//         maxReach=max(maxReach,i+arr[i]);
//         step--;

//         if(step==0){
//             jump++; 
            
//             if(i>=maxReach){
//                 return -1; 
//             }

//             step = maxReach-i; 
//         }
//     }
//     return -1; 
// }


#include<algorithm> 
#include<bits/stdc++.h> 
#include<iostream> 
#include<vector> 
#include<numeric> 
using namespace std; 

// int main(){
//      int arr[]={10,20,5,42,15,22,25}; 
//      int n = sizeof(arr)/sizeof(arr[0]); 
    //  vector<int> vect(arr,arr+n);
    
    // cout<<"the vector is:: "<<endl; 
    // for(int i=0;i<n;i++){
    //     cout<<vect[i]<<" ";
    // }
    // cout<<endl;

    // sort(vect.begin(), vect.end()); 

    // cout<<"vector after sorting is::"<<endl; 
    // for(int i=0;i<n;i++){
    //     cout<<vect[i]<<" "; 
    // }
    // cout<<endl;

    // sort(vect.begin(), vect.end(), greater<int>()); 

    // cout<<"vector sorted in descending order:"<<endl; 
    // for(int i=0;i<n;i++){
//         cout<<vect[i]<<" "; 
//     }
//     cout<<endl;

//     cout<<"max element of the vector is:"<<endl; 
//     cout<<*max_element(vect.begin(), vect.end()); 
//     cout<<endl;

//     cout<<"min element of the vector is:"<<endl; 
//     cout<<*min_element(vect.begin(), vect.end());
//     cout<<endl; 

//     cout<<"the summation of the elements of the vector is:"<<endl; 
//     cout<<accumulate(vect.begin(),vect.end(),0);
//     cout<<endl; 



//     return 0; 

// }

// int main(){
//     int arr[]={10, 20, 15, 23 ,42, 20};
//     int n=sizeof(arr)/sizeof(arr[0]); 
//     vector<int> a(arr,arr+n); 

//     cout<<"occurences of 20 in the vector"<<endl; 
//     cout<<count(a.begin(),a.end(),20); 

//     find(a.begin(),a.end(),5) != a.end() ? 
//                 cout<<"\nelement found": 
//                 cout<<"\nelement not found"; 
// }


int main(){
    int n; 
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    vector<int> v(arr,arr+n); 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (v[i]==v[j]){
                cout<<v[i]<<endl;
            }
        }
    }
}






