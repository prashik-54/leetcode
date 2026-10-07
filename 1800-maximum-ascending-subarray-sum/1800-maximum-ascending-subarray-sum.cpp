class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];
        int i = 1;
        int sum = nums[0];
        while(i<n){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
                maxSum = max(maxSum, sum);
            }
            else{
                sum = nums[i];
            }
            i++;
        }
        return maxSum;
    }
};