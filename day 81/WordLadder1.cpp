// https://leetcode.com/problems/word-ladder/submissions/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        set<string>s(wordList.begin(),wordList.end());
        while(!q.empty()){
            string word=q.front().first;
            int seq=q.front().second;
            q.pop();
            if(word==endWord)
                return seq;
            for(int i=0;i<word.size();i++){
                string temp=word;
                for(char j='a';j<='z';j++){
                    word[i]=j;
                    if(s.find(word)!=s.end()){
                        s.erase(word);
                        q.push({word,seq+1});
                    }
                }
                word=temp;
            }
        }
        return 0;
    }
};