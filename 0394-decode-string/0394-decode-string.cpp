class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> str;
        string current = "";
        int number = 0;

        for(char c : s) {
            if(isdigit(c)) {
                number = number * 10 + (c - '0'); // build multi-digit number
            }
            else if(c == '[') {
                num.push(number);
                str.push(current);
                number = 0;
                current = "";
            }
            else if(c == ']') {
                string temp = current;
                current = str.top();
                str.pop();
                int repeat = num.top();
                num.pop();
                for(int j = 0; j < repeat; j++) {
                    current += temp;
                }
            }
            else {
                current += c;
            }
        }
        return current;
    }
};
