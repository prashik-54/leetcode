class Solution {
public:
    bool equalFrequency(string word) {
        int n=word.size();
        vector<int>f(26);
        for(int i=0;i<n;i++){
            f[word[i]-'a']++;
        }
        for(int i = 0; i<26; i++){
            if(f[i]){
                f[i]--;
                int maxi = *max_element(f.begin(),f.end());
                bool check = true;
                for(int j = 0; j<26; j++){
                    if(f[j] && f[j]!=maxi){
                        check = false;
                    }
                }
                if(check == true ) return true;
                f[i]++;
            }
        }
        return false;
        
    }
};