class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2==0){ //even -> flip aur k=k/2
            int previousAns = kthGrammar(n-1,k/2);
            if(previousAns==0) return 1;
            else return 0;
        }
        else{ //odd -> return same aur k=k/2+1
            int previousAns= kthGrammar(n-1, k/2+1);
            return previousAns;
        }
    }
};