auto cmp(vector<int>&a ,vector<int>&b){
    if(a[0]==b[0]){
        return a[1]>b[1];
    }
    
    return a[0]<b[0];
    
}
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int count=n;
        vector<vector<int>>result;
        sort(intervals.begin(),intervals.end(),cmp);

        result.push_back(intervals[0]);

        for(int i=1;i<n;i++){
            if(result.back()[0]<=intervals[i][0] && result.back()[1]>=intervals[i][1]){
                continue;
            }
            result.push_back(intervals[i]);
        }

        return result.size();
    }
};