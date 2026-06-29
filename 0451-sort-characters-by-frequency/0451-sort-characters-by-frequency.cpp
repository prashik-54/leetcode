bool cmp(pair<char,int>p1,pair<char,int>p2){
    if(p1.second>p2.second) return true; //desending sort by frequency
    return false;
}
class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(char ch: s){
            mp[ch]++;
        }

        vector<pair<char,int>>p;
        for(auto ele : mp){
            p.push_back(ele);
        }

        sort(p.begin(),p.end(),cmp);

        string ans="";
        for(auto ele :p){
            for(int i=0;i<ele.second;i++){
                ans+=ele.first;
            }
        }

        return ans;
    }
};