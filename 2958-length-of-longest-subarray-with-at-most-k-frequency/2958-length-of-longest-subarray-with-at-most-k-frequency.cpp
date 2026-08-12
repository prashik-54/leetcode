class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int len = 0;
        int i = 0;
        int j = 0;
        unordered_map<int, int> freq; // this will store num and its frequency
        while (j < n) {
            int curr = nums[j];
            freq[curr]++;
            while(freq[curr] > k) {
                
                freq[nums[i]]--;
                i++;
            }
            len  = max(len , j-i+1);
            j++;
        }
        return len;
    }
};