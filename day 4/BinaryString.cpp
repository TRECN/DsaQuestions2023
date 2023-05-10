// https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;
 


class Solution
{
    public:
    long binarySubstring(int n, string a){
        
         int res=0,ans=0;
           for(int i=0;i<n;i++){
               if(a[i]=='1'){
                   res += 1;
               }
           }
       

        return (res*(res-1))/2;
        
    }

};


int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}
