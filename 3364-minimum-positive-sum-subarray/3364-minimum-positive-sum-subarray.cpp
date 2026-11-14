class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        //sliding  window
        //min-sum , sum , track - lenth 
        // l <= lenth <= r
        int n = nums.size();
        int minSum = INT_MAX;
        int sum = 0;
        int len = 0;
        for(int i = 0; i<n; i++){
            sum = 0;
            for(int j = i; j<n; j++){
                int len = j-i+1;
                sum += nums[j];
                if(len >= l && len <= r){
                    cout<<sum;
                    if(sum > 0){
                        minSum = min(minSum , sum);
                    }
                    
                }
                
            }
        }
        if(minSum == INT_MAX) return -1;
        return minSum;
    }
};