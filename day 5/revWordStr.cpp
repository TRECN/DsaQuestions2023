// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions
#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    string reverseWords(string S) 
    { 
        string str="";
        S=S+".";
        int n=S.size();
        string t="";
        for(int i=0;i<n;i++){
            if(S[i]!='.'){
                t=t+S[i];
            }
            else{
                str=t+"."+str;
                t="";
            }
        }
        int m=str.size();
        str=str.substr(0,m-1);
        return str;
        
    } 
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}