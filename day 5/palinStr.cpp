// https://practice.geeksforgeeks.org/problems/palindrome-string0817/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions
    
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    string s=S;
	    reverse(S.begin(),S.end());
	    return (S==s)?1:0;
	}

};


int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}