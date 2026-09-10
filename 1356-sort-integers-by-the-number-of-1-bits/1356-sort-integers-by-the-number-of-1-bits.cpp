class Solution {
public:
    int countbits(int num){
        int count = 0;
        while(num != 0){
            count += num & 1;
            num>>=1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [&](int &a, int &b){
            int countA = countbits(a);
            int countB = countbits(b);

            if(countA == countB) return a < b;
            else return countA < countB;
        };

        sort(arr.begin(), arr.end(),lambda);
        return arr;
    }
};