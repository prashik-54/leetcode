class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        //m1 
        return n; // sum of odd n nums -> n^2 , sum of even n nums -> n*(n+1) , so common is n 

        // //m2
        // int oddSum = 0;
        // int evenSum = 0;
        // int odd=1;
        // int even =2;
        // for(int i=0; i<n; i++){
            
        //     oddSum=oddSum+odd;
        //     evenSum=evenSum+even;
        //     odd+=2;
        //     even+=2;
          
        // }
        // return gcd(oddSum,evenSum);
    }
};