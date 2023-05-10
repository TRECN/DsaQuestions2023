// https://practice.geeksforgeeks.org/problems/merge-two-strings2736/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}





string merge (string s1, string s2)
{
    int n=s1.size();
    int m=s2.size();
    string str;
    if(n>m){
        int i;
        for(i=0;i<m;i++){
            str=str+s1[i]+s2[i];
        }
        str=str+s1.substr(i);
    }
    else {
        int i;
        for(i=0;i<n;i++){
            str=str+s1[i]+s2[i];
        }
        str=str+s2.substr(i);
    }
    return str;
    
}