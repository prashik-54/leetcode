class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        int length = 0;
        int maxlen = 0;
        int open = 0;
        int close = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                open++;
            } else {
                close++;
                if (open == close) {
                    length = (open + close);
                    maxlen = max(maxlen, length);
                    length = 0;

                }
                else if(close > open){
                    open = 0;
                    close = 0;
                }
            }
        }
        // reverse check
        open = 0;
        close = 0;
        length = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ')') {
                open++;
            } else {
                close++;
                if (open == close) {
                    length = open + close;
                    maxlen = max(maxlen, length);
                } else if (close > open) {
                    open = 0;
                    close = 0;
                }
            }
        }
        return maxlen;
    }
};