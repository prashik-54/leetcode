class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>v;
        for(int i=1;i<=9;i++){
            string s=to_string(i);
            long long num=i;
            int idx=i;
            while(num<=high){
                if(idx==10) break;
                if(num>=low && num<=high){
                    v.push_back(num);
                }
                s+=to_string(idx+1);
                idx++;
                num=stoll(s);
            }

        }
        sort(v.begin(),v.end());
        return v;
    }
};