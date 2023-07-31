// https://leetcode.com/problems/integer-to-roman/description/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    string intToRoman(int num) {
        vector<string>S={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int>V={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans="";
        for(int i=0;i<13;i++){
            while(num>=V[i]){
                ans+=S[i];
                num-=V[i];
            }
        }
        return ans;
    }
};