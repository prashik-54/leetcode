class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int i = 0;
        int j = 2;
        int count = 0;
        while(j<n){
            char a = s[i];
            char b = s[i+1];
            char c = s[j];
            if(a!=b && b!=c && c!=a){
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
};