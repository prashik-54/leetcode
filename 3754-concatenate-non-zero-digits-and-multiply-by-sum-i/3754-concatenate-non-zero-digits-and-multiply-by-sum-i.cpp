class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string str=to_string(n);
        long long sum=0;
        string number="";
        for(char ch : str){
            if(ch != '0'){
                sum+=(ch-'0');
                number+=ch;
            }
        }
        long long ans= stoll(number) * sum;
        return ans;
    }
};