class Solution {
public:
    string removeStars(string s) {
        stack<int>st;
        int n=s.size();

        for(char ch : s){
            if(ch=='*'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(ch);
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());

        return str;
    }
};