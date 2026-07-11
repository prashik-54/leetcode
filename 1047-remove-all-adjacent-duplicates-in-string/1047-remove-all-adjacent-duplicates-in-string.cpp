class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        vector<char>st; //stack as vector
        for(char ch : s){
            if( !st.empty() && st.back()==ch){
                st.pop_back();
            }
            else{
                st.push_back(ch);
            }
        }
        string ans="";
        if(st.empty())return "";

        for(char ele : st){
            ans+=ele;
        }
        return ans;
    }
};