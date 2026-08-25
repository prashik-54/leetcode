class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int ans =k ; //smallest missing num
        int count = 1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (ans == nums[i]) {
                count++;
                ans = k * count;
            }
        }
        return ans;
    }
};