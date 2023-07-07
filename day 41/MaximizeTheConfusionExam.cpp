// https://leetcode.com/problems/maximize-the-confusion-of-an-exam/description/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int maxSize = k;
        unordered_map<char, int> count;
        for (int i = 0; i < k; i++) {
            count[answerKey[i]]++;
        }
        
        int left = 0;
        for (int right = k; right < answerKey.length(); right++) {
            count[answerKey[right]]++;
            
            while (min(count['T'], count['F']) > k) {
                count[answerKey[left]]--;
                left++;
            }
            
            maxSize = max(maxSize, right - left + 1);
        }
                    
        return maxSize;
    }
};