class Solution {
public:
    string getPermutation(int n, int k) { 
        
        //using inbuilt next permutation function (no recursion)

        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        int count=1;
        string ans="";
        if(count==k){
            for(int i=0;i<v.size();i++){
                ans+=to_string(v[i]);
            }
            return ans;
        }
        while(next_permutation(v.begin(),v.end())){
            count++;
            if(count==k){
                for(int i=0;i<v.size();i++){
                    ans+=to_string(v[i]);
                }
            }
        }
        return ans;
    }
};