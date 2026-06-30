class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1+str2 != str2+str1) return "";
        
        int len1=str1.size();
        int len2=str2.size();

        int g=gcd(len1,len2); //gretest common diviser
        return str1.substr(0,g);
        // string ans="";
        // for(int i=0;i<idx;i++){
        //     ans+=str1[i];
        // }
        // return ans;
    }
};