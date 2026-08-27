class Solution {
public:
    int sqr(int n){
        int sum=0; //square sum
        while(n>0){
            sum+=((n%10)*(n%10));
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>s; //num that already seen
        int sq=sqr(n);
        while(sq>=1){
            if(sq==1)return true;
            else{
                if(s.find(sq)!=s.end()) return false; //square repeated
                else{
                    s.insert(sq);
                    sq=sqr(sq);
                }
            }
        }
        return false;
    }
};