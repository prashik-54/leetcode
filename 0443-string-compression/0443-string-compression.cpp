class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        string str = "";
        char prev = chars[0];
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (chars[i] == prev) {
                count++;
            } else { // char[i]!=previous element
                if (count == 1) {
                    str += prev;
                } else { // count > 1
                    string temp = to_string(count);
                    str += prev;
                    str += temp;
                }
                prev = chars[i];
                count = 1;
            }
        }
        str += prev;
        if (count > 1) {
            str += to_string(count);
        }

        chars.clear();
        for (char ch : str) {
            chars.push_back(ch);
        }
        return str.size();
    }
};