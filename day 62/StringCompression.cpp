// https://leetcode.com/problems/string-compression/description/?envType=study-plan-v2&envId=leetcode-75
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n == 1) return 1;

        int i = 0, j = 0;

        while(i < n){
            int count = 1;
            while(i < n-1 && chars[i] == chars[i+1]){
                count++;
                i++;
            } 
            chars[j] = chars[i];
            j++;
            i++;
            if(count > 1){
                string charCount = to_string(count);
                for(auto c : charCount){
                    chars[j] = c;
                    j++;
                }
            }
        }
        return j;
    }
};