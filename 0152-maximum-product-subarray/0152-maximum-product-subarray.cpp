class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN; //maximum product
        // [2,3,-2,4]
        int prefix=1; //prefix multiplication [2,6,-12,-48]
        int sufix=1; //sufix multiplication [-48,-24,-8,4];
        for(int i=0;i<n;i++){
            prefix*=nums[i];
            sufix*=nums[n-1-i];

            ans=max(ans,max(prefix,sufix));
            if(prefix==0) prefix=1;
            if(sufix==0) sufix=1;

        }
        return ans;
    }
};