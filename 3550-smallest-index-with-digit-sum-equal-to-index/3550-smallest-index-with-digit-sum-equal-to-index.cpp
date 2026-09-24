class Solution {
public:
    int calculateSum(int x){
        int sumOfDigit = 0;
        while(x>0){
            sumOfDigit += (x%10);
            x /= 10;
        }
        return sumOfDigit;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int sum = calculateSum(nums[i]);
            if(sum == i){
                return i;
            }
        }
        return -1;
    }
};