class Solution {
public:

    void generate(vector<string>&v, string s, int open, int close){
        if(open==0 && close==0){ //valid bracket
            v.push_back(s);
            return;
        }
        if(open>0){
            generate(v, s+"(", open-1, close);
        }
        if(close>open){
            generate(v, s+")", open, close-1);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>v;
        generate(v,"",n,n); //first n for open bracket and second for close bracet
        return v;
    }
};