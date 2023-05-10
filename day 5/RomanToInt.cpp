// https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int ans=0;
        for(int i=0; i < str.length();i++){
            if(mp[str[i]] < mp[str[i+1]]){
                ans-=mp[str[i]];
            }
            else{
                ans+=mp[str[i]];
            }
        }
        return ans;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}