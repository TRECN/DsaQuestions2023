// https://practice.geeksforgeeks.org/problems/reverse-a-string/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

string reverseWord(string str){
  string s="";
  int n=str.size();
  for(int i=n-1;i>=0;i--){
      s=s+str[i];
  }
  return s;
}

