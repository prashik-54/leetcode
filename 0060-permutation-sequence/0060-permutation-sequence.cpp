class Solution {
public:
    string getPermutation(int n, int k) { 
        
        //using inbuilt next permutation function (no recursion)

        // vector<int>v;
        string s = "";
        for(int i=0;i<n;i++){
            s+=to_string(i+1);
        }

        
        int count=1;
        if(k==1) return s;
        //string ans="";
        // if(count==k){
        //     for(int i=0;i<s.size();i++){
        //         ans+=to_string(s[i]);
        //     }
        //     return ans;
        // }
        while(next_permutation(s.begin(),s.end())){
            count++;
            if(count==k){
                return s;
            }
        }
        return s;
    }
};