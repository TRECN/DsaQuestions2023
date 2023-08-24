// https://leetcode.com/problems/text-justification/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    return 0;
}
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>ans;
        int n=words.size();
        int i=0;
        while(i<n){
            int curLineLength=words[i].size();
            int j=i+1;
            while(j<n&&curLineLength+words[j].size()+(j-i)<=maxWidth){
                curLineLength+=words[j].size();
                j++;
            }
            int numOfWords=j-i;
            int numOfSpaces=maxWidth-curLineLength;
            string justifiedLine;
            if(numOfWords>1&&j<n){
                int spaceBetweenWords=numOfSpaces/(numOfWords-1);
                int extraSpaces=numOfSpaces%(numOfWords-1);
                justifiedLine=words[i];
                for(int k=i+1;k<j;k++){
                    for(int l=1;l<=spaceBetweenWords;l++)
                        justifiedLine+=" ";
                    if(extraSpaces){
                        justifiedLine+=" ";
                        extraSpaces--;
                    }
                    justifiedLine+=words[k];
                }
            }
            else{
                justifiedLine=words[i];
                for(int k=i+1;k<j;k++){
                    justifiedLine+=" "+words[k];
                }
                int remainingSpace=maxWidth-justifiedLine.size();
                for(int l=1;l<=remainingSpace;l++) 
                    justifiedLine+=" ";
            }
            ans.push_back(justifiedLine);
            i=j;
        }
        return ans;
    }
};