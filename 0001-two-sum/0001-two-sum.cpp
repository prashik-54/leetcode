class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<n;i++){
            int sub=target-nums[i];
            if(m.find(sub)!=m.end()){ // sum got
                v.push_back(m[sub]);
                v.push_back(i);
            }
            else{
                m[nums[i]]=i;
            }
        }
        return v;
    }
};