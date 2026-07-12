class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";

        string s = countAndSay(n-1);
        //procesing 
        int count=1;
        char ch = s[0];
        string str="";
        for(int i=1;i<s.length();i++){
            if(ch==s[i]) count++;
            else{
                str = str + (to_string(count)+ch);
                count=1;
                ch=s[i];
            }
        }
        str = str + (to_string(count)+ch);
        return str;
    }
};