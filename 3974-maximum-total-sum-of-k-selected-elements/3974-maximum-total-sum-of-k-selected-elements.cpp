class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long sum=0;
        for(int i=n-1;i>=0;i--){
            if(k>0 && mul>0){    
                sum+=(long long)nums[i]*mul;
                k--;
                mul--;
            }
            else if(k>0){
                sum+=nums[i];
                k--;
            }
            else{
                break;
            }
        }
        return sum;
    }
};