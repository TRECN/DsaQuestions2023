// https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    void binSort(int A[], int n)
    {
       //Your code here
       int c=0;
       for (int i=0;i<n;i++){
           if(A[i]==0)
            c++;
       }
       for(int i=0;i<n;i++){
           if(c!=0){
               A[i]=0;
               c--;
           }
           else
            A[i]=1;
       }
    }
};
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}
