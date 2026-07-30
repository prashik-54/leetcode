class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if(n<=8) return n;
        int sum = 0;
        int keys = 1;
        int count = 1;
        for(int i =0;i<n;i++){
            if(keys<=8){
                sum += count;
                keys++;
            }
            if(keys>8){
                count++;
                keys=1;
            }
        }
        return sum;
    }
};