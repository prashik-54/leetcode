class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        if(sum < 10 && num < 10){
            ans += to_string(sum);
            while(num > 1){
                ans += "0";
                num--;
            }
            return ans;
        }
        if(sum > 9 && num == 1){
            return ans;
        }
        while(sum > 9){
            ans += "9";
            sum -= 9;
        }
        ans += to_string(sum);
        if(ans.size() > num) return "";
        num = num - ans.size();
        while(num > 0){
            ans += "0";
            num--;
        }
        return ans;



    }
};