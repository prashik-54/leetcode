class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string result = "";
        int len1 = word1.length();
        int len2 = word2.length();
        int i = 0;

        while (i < len1 || i < len2) {
            if (i < len1) {
                result += word1[i];
            }
            if (i < len2) {
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};