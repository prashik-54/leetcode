class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1+str2 != str2+str1) return "";
        
        int len1=str1.size();
        int len2=str2.size();

        string ans="";
        int idx=gcd(len1,len2);
        for(int i=0;i<idx;i++){
            ans+=str1[i];
        }
        return ans;
    }
};