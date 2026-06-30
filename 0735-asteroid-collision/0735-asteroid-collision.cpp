class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int ele : asteroids) {
            bool destroyed = false;
            while (!st.empty() && ele < 0 && st.top() > 0) {
                if (st.top() < -ele) {
                    st.pop(); // top asteroid destroyed
                    continue; // keep checking
                } else if (st.top() == -ele) {
                    st.pop(); // both destroyed
                    destroyed = true;
                    break;
                } else {
                    destroyed = true; // current asteroid destroyed
                    break;
                }
            }
            if (!destroyed) {
                st.push(ele);
            }
        }
        
        // Convert stack to vector
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
