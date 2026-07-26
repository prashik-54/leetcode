class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int>ans(2);
        int left = 0;
        int right = n-1;
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                ans[0] = left+1;
                ans[1] = right+1;
                break;
            }
            else if(numbers[left]+numbers[right]>target){
                right--;
            }
            else{
                left++;
            }
        }
        return ans;
    }
};