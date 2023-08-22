class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n = columnNumber;
        deque<char> q;
        while (n > 0) {
            n--;
            auto x = div(n, 26);
            q.push_front(char('A'+x.rem));
            n = x.quot;
        }       
        return string(q.begin(), q.end()); 
    }
};
