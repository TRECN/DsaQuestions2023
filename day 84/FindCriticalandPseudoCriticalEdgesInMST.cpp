// https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class UnionFind{
    
    public:
        vector<int>parents;
        int size;
        UnionFind(int n){
            parents.resize(n);
            for(int i=0;i<n;i++){
                parents[i]=i;
            }
            size=n;
        }
        int find(int i){
            if(parents[i]==i){
                return i;
            }
            int root=find(parents[i]);
            parents[i]=root;
            return root;
        }
        bool Union(int i,int j){
            int root_i=find(i);
            int root_j=find(j);
            if(root_i!=root_j){
                parents[root_i]=root_j;
                size--;
                return true;
            }
            return false;
        }
};


class Solution {
public:

    int MST(int n,vector<vector<int>>&edges,vector<int>&inc,vector<int>&exc){
       UnionFind uf(n);
       int cost=0;
       if(inc.size()!=0){
           uf.Union(inc[0],inc[1]);
           cost+=inc[2];
       }
       for(auto edg:edges){
           if(exc!=edg&&uf.Union(edg[0],edg[1])){
               cost+=edg[2];
           }
       }
       return uf.size==1?cost:INT_MAX;
    }

    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        vector<int>critical;
        vector<int>psuedo;
       
        map<vector<int>,int>mp;
        int j=0;
        for(auto i:edges){
            mp[i]=j;
            j++;
        }
        sort(edges.begin(),edges.end(),[](const vector<int>&a,const vector<int>&b){
            return a[2]<b[2];
        });
        vector<int>null={};
        int mstS=MST(n,edges,null,null);
        for(auto edg:edges){
            int exclude=MST(n,edges,null,edg);
            

            if(exclude>mstS)
                critical.push_back(mp[edg]);
            else 
            {
                int include=MST(n,edges,edg,null);

                if(include==mstS)
                psuedo.push_back(mp[edg]);

            }
        }
        return {critical,psuedo};
    }
};