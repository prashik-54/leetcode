class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return 1;
        }
        int sum = 0;
        for(int i = 0; i<n; i++){
            unordered_set<int>s;
            for(int j = i; j<n; j++){
                s.insert(nums[j]);
                cout<<s.size()<<" ";
                sum += (s.size()*s.size());
            }
        }
        return sum;

    }
};