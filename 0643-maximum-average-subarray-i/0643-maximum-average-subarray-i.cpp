class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();

        int st=0;
        int end=0;
        double MaxSum=INT_MIN;
        double sum=0;
        while(end<n){
            while(end-st<k){
                sum+=nums[end];
                end++;
            }
            MaxSum=max(sum,MaxSum);
            sum-=nums[st];
            st++;
        }
        double avg=MaxSum/k;
        return avg;
    }
};