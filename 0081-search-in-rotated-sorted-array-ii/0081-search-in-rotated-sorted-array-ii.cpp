class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return true;
            } else if (nums[low] == nums[mid] && nums[high] == nums[mid]) {
                // exception happens beacause of duplicates elems - if all nums
                // of mid,low and high gets equal then which side is sorted left
                // or right??
                low = low + 1;
                high = high - 1;
                continue; // again start from starting
            }
            // always a sorted array in each side - either left or right side of
            // mid
            else if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && nums[mid] >= target) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else { // nums[high]>=nums[mid]- right arr is sorted
                if (nums[mid] <= target && nums[high] >= target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};