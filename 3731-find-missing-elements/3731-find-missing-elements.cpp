class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int low = nums[0];
        int high = nums[n-1];
        vector<int>ans;
        unordered_set<int>s;
        for(int ele : nums){
            s.insert(ele);
        }
        for(int i =low+1 ; i<high ; i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};