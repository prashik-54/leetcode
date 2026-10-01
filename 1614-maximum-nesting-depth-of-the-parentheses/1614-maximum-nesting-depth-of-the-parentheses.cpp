class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int maxDepth = 0;
        int currDepth = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                currDepth++;
                maxDepth = max(maxDepth, currDepth);
            }
            else if(s[i] == ')'){
                currDepth--;
            }
        }
        return maxDepth;
    }
};