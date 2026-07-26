class Solution {
public:
    bool allzero(vector<int>v){
        for(int ele : v){
            if(ele!=0) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        int n = s.size();
        if (n < k) return {}; // Edge case: s is shorter than p
        vector<int> v (26,0);
        for(int i=0;i<k;i++){
            v[p[i]-'a']++;
        }
        
        vector<int>ans;

        for (int i = 0; i < k; i++) { //first window
            v[s[i] - 'a']--;
        }
        // Check the first window
        if (allzero(v)) {
            ans.push_back(0);
        }
        //remainig windows
        
        for (int i = k; i < n; i++) {
            v[s[i] - 'a']--;        // Add new character to window
            v[s[i - k] - 'a']++;    // Remove old character from window

            if (allzero(v)) {
                ans.push_back(i - k + 1);
            }
        }
        return ans;
    }
};