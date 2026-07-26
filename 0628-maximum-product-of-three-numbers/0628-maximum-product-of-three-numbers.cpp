class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxSum = INT_MIN;
        maxSum = max(maxSum , nums[n-1]*nums[n-2]*nums[n-3]);
        maxSum = max(maxSum , nums[0]*nums[1]*nums[2]);
        maxSum = max(maxSum, nums[0]*nums[1]*nums[n-1]);

        return maxSum;
    }
};