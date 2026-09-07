class Solution {
public:
    int minFlips(int a, int b, int c) {
        //m1
        // int flip = 0;
        // while(a!=0 || b!=0 || c!=0){
        //     if((c&1)==1){ //last bit of c is 1
        //         if((a&1)==0 && (b&1)==0) flip++; //any on bit should be 1 for OR 1
        //     }
        //     else{ //last bit of c is 0
        //         //both bit should be 0 for OR 0
        //         if((a&1)==1) flip++; 
        //         if((b&1)==1) flip++;
        //     }

        //     //now right shift by 1
        //     a>>=1;
        //     b>>=1;
        //     c>>=1;
        // }
        // return flip;

        //m2
        int result1 = ((a|b)^c); //flips to flip but has one eception
        int result2 = ((a&b) & result1); //solves eception (of what is 2 bits are same )
        return __builtin_popcount(result1) + __builtin_popcount(result2);
    }
};