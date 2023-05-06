// https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int remove_duplicate(int a[],int n){
            int j=1;
            int k=1;
            for(int i=0;i<n-1;i++){
                if(a[i+1]>a[i])
                {
                    j++;
                    a[k]=a[i+1];
                    k++;
                }
            }
            return j;
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}