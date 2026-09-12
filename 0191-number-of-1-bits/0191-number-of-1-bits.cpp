class Solution {
public:
    int solve(int n){
        int count = 0;
        while(n){
            if(n & 1 == 1) count++;
            n>>=1;
        }
        return count;
    }
    int hammingWeight(int n) {
        return solve(n);
    }
};