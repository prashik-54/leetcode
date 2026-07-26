class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word = "";
        vector<string>str;
        while(ss>>word){
            str.push_back(word);
        }
        if(str.size()!=pattern.size()) return false;

        unordered_map<char,string>charToStr;
        unordered_map<string,char>strToChar;
        int n = pattern.size();
        for(int i = 0;i<n;i++){
            word = str[i];
            char ch = pattern[i];

            if(charToStr.count(ch) && charToStr[ch]!=word) return false;

            if(strToChar.count(word) && strToChar[word]!=ch ) return false;

            charToStr[ch] = word;
            strToChar[word] = ch;
        }
        return true;
    }
};