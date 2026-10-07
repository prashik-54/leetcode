class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int limit = 0;
        for(int i = 0; i<n; i++){
            limit = max(limit, nums[i]);
            if(limit == 0 && i != n-1){
                return false;
            }
            limit--;
        }
        return true;
    }
};