class Solution {
public:
    void combination(vector<vector<int>>& ans, vector<int>temp, vector<int>candidates,int target, int idx){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0) return;

        for(int i=idx;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            combination(ans, temp, candidates, target-candidates[i], i); // passing i as idx
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=candidates.size();
        combination(ans,temp,candidates,target,0);
        return ans;
    }
};