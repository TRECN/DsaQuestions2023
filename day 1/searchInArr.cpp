// https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int search(int arr[], int N, int X)
    {
        for(int i=0;i<N;i++){
            if(arr[i]==X)
            return i;
            
        }
        return -1;
    }

};

int main()
{
        int N;
        cin>>N;
        int arr[N];
        int x;
        
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        cin>>x;
        Solution ob;
        cout<<ob.search(arr,N,x)<<endl; //Linear search
    

    return 0;
    
}

// } Driver Code Ends