class Solution {
public:
    int dp[101][101];
    bool solve(int idx, int n, string s, int open){
        if(idx == n){
            return open == 0;
        }
        if(dp[idx][open] != -1){
            return dp[idx][open];
        }
        bool isValid = false;
        if(s[idx] == '('){
            isValid = solve(idx+1, n, s, open+1);
        }
        else if(s[idx] == '*'){
            isValid = (solve(idx+1, n, s, open+1) || solve(idx+1, n, s, open));
            if(open > 0){
                isValid |= solve(idx+1, n, s, open-1);
            }
        }
        else if(s[idx] == ')'){
            if(open > 0){
                isValid = solve(idx+1, n, s, open-1);
            }
        }

        dp[idx][open] = isValid;
        return dp[idx][open];

    }
    bool checkValidString(string s) {
        int n = s.size();
        int i = 0;
        memset(dp, -1, sizeof(dp));
        bool ans = solve(i,n,s,0);
        return ans;
    }
};