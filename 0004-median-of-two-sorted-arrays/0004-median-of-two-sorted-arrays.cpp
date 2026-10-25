class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums = nums1;
        for(auto ele : nums2){
            nums.push_back(ele);
        }
        sort(nums.begin(),nums.end());
        //odd
        int n = nums.size();
        double medium = 0;
        if(n==0){
            return medium;
        }
        else if(n%2 != 0){ //odd
            medium = nums[n/2];
        }
        else{
            double temp = nums[n/2-1] + nums[n/2];
            cout<<temp;
            medium = temp/2;
        }

        return medium;

    }
};