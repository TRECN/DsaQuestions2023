// https://leetcode.com/problems/largest-odd-number-in-string/submissions/989454431/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    string largestOddNumber(string num) { 
        int i;
        for( i = num.size()-1 ; i >= 0 ; --i){
            if((num[i]-48) % 2 != 0)
                break;
        }
        num.resize(i+1);
        
        return num; 
    }
};