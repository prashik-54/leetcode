class Solution {
public:
    int countCommas(int n) {
        //m1
        // string s = to_string(n);
        // int len = s.size();
        // if(len<4) return 0;
        // return n-1000+1;

        if(n<1000) return 0;
        return n-1000+1;

    }
};