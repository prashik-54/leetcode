class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector<int>diff(pow(10,5)+1, 0); //maximum difference can be 10^5 
        long long total = 0;
        for(int i = 0; i<n; i++){
            int temp = abs(nums1[i] - nums2[i]);
            total += temp;
            diff[temp]++;
        }
        int k = k1 + k2;
        if(total <= k) return 0;
        int i = pow(10,5);
        while(i>0 && k>0){
            int count = diff[i];
            if(count != 0){
                int operations = min(count, k);
                diff[i] -= operations;
                diff[i-1] += operations;
                k -= operations;
            }
            i--;
        }
        long long sum = 0;
        for(int i = 1; i<diff.size(); i++){
            sum += (diff[i] * (long long )i * i);
        }
        return sum;
    }
};