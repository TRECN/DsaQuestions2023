// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;




class Solution
{
    public:
    char getMaxOccuringChar(string str)
    {
        map<char,int>a;
        for(auto i:str){
            a[i]++;
        }
        int x=0;
        char y;
        for(auto i:a){
            if(i.second>x){
                y=i.first;
                x=i.second;
            }
        }
        return y;
    }

};


int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}