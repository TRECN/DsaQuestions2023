// https://practice.geeksforgeeks.org/problems/anagram-of-string/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

int remAnagram(string str1, string str2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

int remAnagram(string str1, string str2)
{
    int n=str1.size();
    int m=str2.size();
    int h[26]={0};
    int s=0;
    if(n>m){
        for(int i=0;i<n;i++)
            h[str1[i]-'a']++;
        for(int i=0;i<m;i++)
            h[str2[i]-'a']--;
        for(int i=0;i<26;i++)
            s+=abs(h[i]);
        
    }
    else{
        for(int i=0;i<m;i++)
            h[str2[i]-'a']++;
        for(int i=0;i<n;i++)
            h[str1[i]-'a']--;
        for(int i=0;i<26;i++)
            s+=abs(h[i]);
    }
    return s;
}