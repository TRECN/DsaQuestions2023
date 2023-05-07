// https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool areRotations(string s1, string s2) {
        if(s1.length() != s2.length())
            return false;
        else {
            string s = s1+s1;
            if(s.find(s2) != -1)
                return true;
            else
                return false;
        }
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends