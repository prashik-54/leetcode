class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.size();
        if(k >= n) return s;
        string str = "";
        int sum = 0;
        while( s.size() > k){
            n = s.size();
            string digitSum = "";
            int idx = 0;
            int temp = 0;
            for(int i = 0; i<n; i+=k){
                for(int j = i; j < (i+k) && j<n; j++){
                    temp += (s[j]-'0');
                }
                digitSum += to_string(temp);
                temp = 0;
                idx++;
            }
            s = digitSum;
        }

        return s;

    }
};