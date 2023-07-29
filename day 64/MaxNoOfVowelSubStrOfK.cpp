// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
        int count=0;
        int ans=0;
        for(int i=0;i<k;i++){
            if(vowel.count(s[i])>0)
                count++;
        }
        ans=count;

        for(int i=k;i<s.size();i++){
            if(vowel.count(s[i-k])>0)count--;
            if(vowel.count(s[i])>0){
                count++;
                ans=max(ans,count);
            }
        }
        return ans;

    }
};