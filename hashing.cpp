//finding the number of occurences in an array (brute force with O(n) time.)
// int occu (int number, int arr[], int n)
// {
//     int cnt = 0; 
    
//     for (int i=0; i<n; i++)
//     {
//         if (arr[i] == number)
//         {
//             cnt++; 
//         }
//     }
//     return cnt; 
// }

//hasing means precomputing the data. just like matrix mulplication in number theory concepts. 

#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n; 
    cin>>n; 
    int arr[n]; 
    map<int, int> mpp; 

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        // mpp[arr[i]]++; 
    }

    //precomputation
    int hash[13] = {0};  //inside main, max array can only be 10^6; exceeding will give segmentation error.
    //declared globally, the array can have 10^7, if the data type is int in both cases.
    //for bool values, main = 10^7 and global = 10^8;

    //to solve large values problem, map or unordered map is used. 
    for(int i=0; i<n; i++)
    {
        hash[arr[i]] += 1; 
    }

    //using map: 

    // map<int, int> mpp; 
    // for(int i=0; i<n; i++)
    // {
    //     mpp[arr[i]]++; 
    // }


    int q; 
    cin>>q; 
    while(q--)
    {
        int number; 
        cin>>number; 

        
    }
    int s; 
        s = sizeof(hash) / sizeof(hash[0]);

        int m = *max_element(hash, hash+s);
        for(int i=0; i<s; i++)
        {

        
        if (hash[i] == m)
        {
            cout<<"the max frequency elements are"<<i<<endl;
        }
        }
}


/*
time complexity of hash maps: 
1. storing 
2. fetching
both storing and fetching takes log n time for all cases.

hence unordered map is preferred because it has constant avg and best time complexity. 
if unordered map gives a tle, switch back to regular map. 
worst case in unordered map is N, because of internal collisions. 

hashing map is designed in three ways: division method, folding and mid square method. 
division method:: 
*/