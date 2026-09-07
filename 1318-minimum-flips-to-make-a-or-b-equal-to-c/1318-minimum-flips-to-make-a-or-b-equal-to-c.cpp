class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flip = 0;
        while(a!=0 || b!=0 || c!=0){
            if((c&1)==1){ //last bit of c is 1
                if((a&1)==0 && (b&1)==0) flip++; //any on bit should be 1 for OR 1
            }
            else{ //last bit of c is 0
                //both bit should be 0 for OR 0
                if((a&1)==1) flip++; 
                if((b&1)==1) flip++;
            }

            //now right shift by 1
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return flip;
    }
};