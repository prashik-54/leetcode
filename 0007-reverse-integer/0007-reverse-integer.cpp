class Solution {
public:
    int reverse(int x) {
        long long reverse=0;
        bool negative=false;
        long long temp=x;
        if(temp<0){
            temp=abs(temp);
            negative=true;
        }
        while(temp>0){
            int lastDigit= temp%10;
            reverse=reverse*10 +lastDigit;
            temp/=10;
        }
        if(reverse >INT_MAX){
            return 0;
        }
        else if(negative){
            return -reverse;
        }
        
        return reverse;
    }
};