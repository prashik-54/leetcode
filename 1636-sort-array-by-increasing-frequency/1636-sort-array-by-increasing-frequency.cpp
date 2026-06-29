bool cmp(pair<int,int> p1 ,pair<int,int>p2){
    if(p1.second==p2.second){
        return p1.first>p2.first;
    }
    return p1.second<p2.second;
}
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>p;
        for(auto m : mp){
            p.push_back(m);
        }

        sort(p.begin(), p.end(), cmp ); //cmp-comparator

        vector<int>ans;
        for(auto v : p){
            for(int i=0;i<v.second;i++){
                ans.push_back(v.first);
            }
        }
        return ans;
    }
};