class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int len=0;
        int maxlen=INT_MIN;
        int flips=0;
        while(j<n){
            if(nums[j]==1){
                j++;
            }
            else if(nums[j]==0){
                if(flips<k){
                    flips++;
                    j++;
                }
                else{
                    len=j-i;
                    maxlen=max(len,maxlen);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
                
            }
        }
        len=j-i;
        maxlen=max(len,maxlen);
        return maxlen;
    }
};