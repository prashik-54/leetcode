class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();

        long long sum = 0;
        for (int num : nums) {
            sum += num;
        }

        long long target = sum - x;

        if (target == 0)
            return n;

        int left = 0;
        long long currSum = 0;
        int largestLength = -1;

        for (int right = 0; right < n; right++) {
            currSum += nums[right];

            while (left <= right && currSum > target) {
                currSum -= nums[left];
                left++;
            }

            if (currSum == target) {
                largestLength = max(largestLength, right - left + 1);
            }
        }

        if (largestLength == -1)
            return -1;

        return n - largestLength;
    }
};
