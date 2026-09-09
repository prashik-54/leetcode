class Solution {
public:
    long long countCommas(long long n) {
        if (n < 1000)
            return 0;
        if (n < pow(10, 6)) {
            return n - 1000 + 1;
        }
        if (n < pow(10, 9)) {
            return ((n - pow(10, 6)) + 1)*2 + (pow(10, 6) - 1000);
        }
        if (n < pow(10, 12)) {
            return ((n - pow(10, 9))+ 1)*3 + (pow(10, 9) - pow(10, 6))*2 +
                   (pow(10, 6) - 1000);
        }
        if (n < pow(10, 15)) {
            return ((n - pow(10, 12))+ 1)*4 + (pow(10, 12) - pow(10, 9))*3 +
                   (pow(10, 9) - pow(10, 6))*2 + (pow(10, 6) - 1000);
        }
        if (n == pow(10, 15)) {
            return ((n - pow(10, 12))+ 1)*4 + (pow(10, 12) - pow(10, 9))*3 +
                   (pow(10, 9) - pow(10, 6))*2 + (pow(10, 6) - 1000) + 1;
        }
        return 0;
    }
};