class Solution {
public:
    string smallestSubsequence(string str) {
        int n = str.size();
        stack<char> st; // for lexographical sequence
        unordered_map<char, int>mp; // for findind element is present in stack or not
        unordered_set<char> present;
        for (int i = 0; i < n; i++) {
            mp[str[i]]++;
        }
        for (int i = 0; i < n; i++) {
            char ch = str[i];
            mp[ch]--;

            if (present.find(ch) != present.end()) {
                continue;
            }
            while (!st.empty() && ch < st.top() && mp[st.top()] > 0) {
                present.erase(st.top());
                st.pop();
            }

            st.push(ch);
            present.insert(ch);
        }
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};