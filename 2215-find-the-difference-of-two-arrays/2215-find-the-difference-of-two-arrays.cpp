class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1;
        unordered_set<int>s2;

        for(auto ele : nums1){
            s1.insert(ele);
        }
        for(auto ele : nums2){
            s2.insert(ele);
        }
        //ans vector
        vector<vector<int>>ans(2);
        for(int ele : s1){
            if(s2.find(ele)==s2.end()){
                ans[0].push_back(ele);
            }
        }
        for(int ele : s2){
            if(s1.find(ele)==s1.end()){
                ans[1].push_back(ele);
            }
        }
        return ans;
    }
};