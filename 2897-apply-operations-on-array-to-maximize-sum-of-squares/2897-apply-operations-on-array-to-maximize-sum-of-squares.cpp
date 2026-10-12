class Solution {
public:
    long long MOD = 1e9 + 7; 
    int maxSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>count(32,0); //will store total bits on that position
        //i have to count bits in num of nums 
        for(int num : nums){
            for(int b=0; b<32; b++){
                if(num & (1<<b)){
                    count[b]++;
                }
            }
        } 
        //now i have to make max possible number of max bit accourding to k times
        //and add square of that
        long long sum = 0;
        while(k>0){
            long long num = 0;
            for(int i = 0; i<32; i++){
                if(count[i] > 0){
                    num += (1<<i);
                    count[i]--;
                }
            }
            k--;
            sum = (sum + (num*num) % MOD) % MOD;
        }

        return sum;

    }
};