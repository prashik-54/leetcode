class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int st=0;
        int end=n-1;
        int count=0;
        while(st<end){
            if(nums[st]+nums[end]==k){
                count++;
                st++;
                end--;
            }
            else if(nums[st]+nums[end]<k){
                st++;
            }
            else{
                end--;
            }
        }
        return count;
    }
};