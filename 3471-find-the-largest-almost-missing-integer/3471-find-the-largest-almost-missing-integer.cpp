class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int maxEle = INT_MIN;
        unordered_map<int,int>freq;

        for(int i = 0;i<n;i++){
            maxEle = max(maxEle , nums[i]);
            freq[nums[i]]++;
        }

        if(k==n){  
            return maxEle;
        }

        if(k==1){
            if(freq[maxEle]==1) return maxEle;
            else{
                maxEle = -1;
                for(int i =0;i<n;i++){
                    if(freq[nums[i]]==1){
                        maxEle = max(maxEle , nums[i]);
                    }
                }
                return maxEle;
            }
        }

        //for 1 < k < n

        if(nums[0]>nums[n-1]){
            if(freq[nums[0]]==1) return nums[0];
            if(freq[nums[n-1]]==1) return nums[n-1];
        }

        if(nums[n-1]>nums[0]){
            if(freq[nums[n-1]]==1) return nums[n-1];
            if(freq[nums[0]]==1) return nums[0];
        }    

        return -1;

    }
};