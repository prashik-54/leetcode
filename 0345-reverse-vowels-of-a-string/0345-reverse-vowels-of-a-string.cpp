class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int st=0;
        int end=n-1;
        unordered_set<char> c ={'a','e','i','o','u','A','E','I','O','U'};
        while(st<end){
            char ch1 = s[st];
            char ch2 = s[end];

            if(c.find(ch1)==c.end()){
                st++;
            }
            else if(c.find(ch2)==c.end()){
                end--;
            }
            else {
                swap(s[st],s[end]);
                st++;
                end--;
            }
        }
        return s;
    }
};