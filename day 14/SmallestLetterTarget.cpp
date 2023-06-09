// https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int r=letters.size()-1;
        if(letters[0]>target)
            return letters[0];
        
        if(target>=letters[r])
            return letters[0];
        
        char ans;
        while(l<=r){
            int m=(l+r)/2;
            if(letters[m]>target){
                ans=letters[m];
                r=m-1;
            }
            else
                l=m+1;
        }
        return ans;

    }
};