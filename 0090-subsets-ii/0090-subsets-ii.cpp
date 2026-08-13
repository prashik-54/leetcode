class Solution {
public:
    void helper(vector<int>& nums,vector<int>ans,vector<vector<int>>& finalans, int idx){
        if(idx==nums.size()){
            finalans.push_back(ans);
            return;
        }
        helper(nums,ans,finalans,idx+1);
        ans.push_back(nums[idx]);
        helper(nums,ans,finalans,idx+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>finalans; 
        //step 1 - gather all subsets (including duplicates)
        helper(nums,ans,finalans,0); 

        //remove duplicates
        set<vector<int>>s;
        for(auto temp : finalans){
            sort(temp.begin(),temp.end());
            s.insert(temp);
        }
        vector<vector<int>>subset;
        for(auto temp : s){
            subset.push_back(temp);
        }
        return subset;

    }
};