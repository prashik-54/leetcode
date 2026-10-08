class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        vector<string>str;
        string curr = "";
        stack<char>st;
        for(int i = 0; i<n; i++){
            curr += s[i];
            if(s[i] == '('){
                st.push('(');
            }
            else{
                st.pop();
            }
            if(st.empty()){
                str.push_back(curr);
                curr = "";
            }
        }
        string ans = "";
        if(str.size() == 0) return ans;

        for(int i = 0; i<str.size(); i++){
            curr = str[i];
            curr.pop_back();
            ans += curr.substr(1);
        }
        return ans;
    }
};