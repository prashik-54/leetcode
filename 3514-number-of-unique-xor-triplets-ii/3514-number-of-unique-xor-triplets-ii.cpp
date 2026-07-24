class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return n;

        unordered_set<int>pairXor;
        for(int i = 0; i<n ; i++){
            for(int j = i; j < n; j++){
                pairXor.insert(nums[i]^nums[j]);
            }
        }
        unordered_set<int>ans;
        for(int ele : pairXor){
            for(int i = 0;i<n;i++){
                ans.insert(ele^nums[i]);
            }
        }
        return ans.size();
    }
};