class Solution {
public:
    void solve(string &s, int i, int n, int count, string &curr, unordered_set<string> &str, int &maxLen){
        if(count < 0){
            return;
        }
        if(i == n){
            if(count != 0){
                return;
            }
            if(curr.length() > maxLen){
                maxLen = curr.length();
                str.clear();
            }
            if(curr.length() == maxLen){
                str.insert(curr);
            }
            return;
        }

        if(s[i] == '('){
            curr.push_back('(');
            solve(s, i+1, n, count+1, curr, str, maxLen);
            curr.pop_back();
            solve(s, i+1, n, count, curr, str, maxLen);
        }
        else if(s[i] == ')'){
            curr.push_back(')');
            solve(s, i+1, n, count-1, curr, str, maxLen);
            curr.pop_back();
            solve(s, i+1, n, count, curr, str, maxLen);
        }
        else{
            curr.push_back(s[i]);
            solve(s, i+1, n, count, curr, str, maxLen);
            curr.pop_back();
            
        }
        return;
        

    }

    vector<string> removeInvalidParentheses(string s) {
        int n = s.size();
        int i = 0;
        int count = 0;
        unordered_set<string>str;
        int maxLen = 0;
        string curr = "";
        solve(s,i,n,count,curr,str,maxLen);
        vector<string>ans;
        for(auto ele : str){
            ans.push_back(ele);
        }
        return ans;
    }
};