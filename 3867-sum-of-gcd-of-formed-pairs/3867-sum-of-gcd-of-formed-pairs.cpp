class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        long long maxele = nums[0];
        vector<int>prefixgcd(n);
        vector<int> maxi(n);
        for(int i=0;i<n;i++){
            maxele = max((long long)nums[i],maxele);
            maxi[i] = maxele;
            
            prefixgcd[i] = gcd(nums[i],maxi[i]);
            
        }
        
        sort(prefixgcd.begin(),prefixgcd.end());
        long long sum =0;
        int low =0;
        int high =n-1;
        while (low<high){
            sum += gcd(prefixgcd[low],prefixgcd[high]);
            low++;
            high--;
        }
        return sum;
    }
};