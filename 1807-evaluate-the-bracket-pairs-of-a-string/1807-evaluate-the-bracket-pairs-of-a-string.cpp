class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = knowledge.size();
        string str = "";
        string ans = "";

        unordered_map<string, string> mp;
        for (int i = 0; i < n; i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                ans += str;
                str = "";
            } else if (s[i] == ')') {
                if(mp.count(str)) {
                    ans += mp[str];

                } else {
                    ans += "?";
                }
                str = "";
            } else {
                str += s[i];
            }
        }
        if(s[s.size()-1] != ')') ans += str;
        return ans;
    }
};