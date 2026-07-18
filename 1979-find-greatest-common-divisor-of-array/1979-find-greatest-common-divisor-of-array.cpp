class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int minnum = nums[0];
        int maxnum = nums[n-1];

        return gcd(minnum,maxnum);

    }
};