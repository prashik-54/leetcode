class Solution {
    public int singleNumber(int[] nums) {
        int n = nums.length;
        int ans = 0;
        for(int i =0;i<32;i++){
            int zero = 0;
            int one = 0;
            for(int j =0;j<n;j++){
                //bit at ith position
                if((nums[j] & (1<<i))==0) zero++;
                else one++;
            }
            if(one%3!=0){ //means it is one 
                ans += (1<<i);
            }
        }
        return ans;
    }
}