// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1?page=2&difficulty[]=0&category[]=Arrays&sortBy=submissions
#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int>a,b;
        for(int i=0;i<n;i++){
            if(arr[i]<0)
                a.push_back(arr[i]);
            else
                b.push_back(arr[i]);
        }
        int k=0;
        for(auto i:b){
            arr[k]=i;
            k++;
        }
        for(auto i:a)
        {
            arr[k]=i;   
            k++;
        }
    }
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
