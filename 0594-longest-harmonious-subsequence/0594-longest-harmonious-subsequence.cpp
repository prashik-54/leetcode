class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        int i =0;
        int j = 0;
        while(j<n && i<n){
            if(nums[j]-nums[i]==1){
                ans = max(ans, j-i+1);
                j++;
            }
            else if(nums[j]-nums[i]>1){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};