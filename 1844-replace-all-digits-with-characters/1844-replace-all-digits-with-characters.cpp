class Solution {
public:
    string replaceDigits(string s) {
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(i%2!=0){
                char ch = s[i-1]+(s[i]-'0');
                ans+=ch;
                cout<<ans<<" ";
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};