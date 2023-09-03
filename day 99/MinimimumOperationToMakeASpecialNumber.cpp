// https://leetcode.com/problems/minimum-operations-to-make-a-special-number/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int minimumOperations(string num) {
        int n = num.length();
        int ans = n;

        if (n == 1&&num=="0")
            return 0;
        for (int i = n - 1; i > 0; i--) {
            if (num[i] == '0') ans = min(ans, n - 1);
            for (int j = i - 1; j >= 0; j--) {
                string div="";
                div+=num[j];
                div+=num[i];
                if (stoi(div) % 25 == 0) {
                    ans = min(ans, n-j-2);
                }
            }
        }

        return ans;
    }
};