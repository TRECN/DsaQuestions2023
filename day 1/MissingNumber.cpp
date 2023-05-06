// https://practice.geeksforgeeks.org/problems/missing-number4257/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}


int missingNumber(int A[], int N)
{
    int s=0,s1=0;
    for(int i=1;i<=N;i++)
        s+=i;
    for(int i=0;i<N-1;i++)
        s1+=A[i];
    return s-s1;
}