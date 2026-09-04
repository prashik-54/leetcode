class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>maxPrefix(n);
        vector<int>minSufix(n);

        //max prefix
        maxPrefix[0]= nums[0];
        for(int i=1;i<n;i++){
            maxPrefix[i] = max(nums[i] , maxPrefix[i-1]);
        }

        //min sufix
        minSufix[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            minSufix[i]=min(nums[i], minSufix[i+1]);
        }

        for(int i=0;i<n;i++){
            if(maxPrefix[i]-minSufix[i]<=k){
                return i;
            }
        }
        return -1;
    }
};