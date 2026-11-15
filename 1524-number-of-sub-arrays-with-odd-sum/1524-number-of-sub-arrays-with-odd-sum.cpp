class Solution {
public:
    int MOD = 1e9 + 7;
    int numOfSubarrays(vector<int>& arr) {
        //take prefix sum
        // remaimber ->  even + odd = odd  also odd + even = odd
        //arr -> [1,3,5]
        //prefix sum ->  0,[1,4,9]
        //think 0 as even 
        //for every odd sum add count of total even previously and vice versa
        int n = arr.size();
        int even = 1;
        int odd = 0;
        long long totalOdd = 0;
        //prefixsum 
        for(int i = 1; i<n ;i++){
            arr[i] += arr[i-1];
        }

        for(int i = 0; i<n; i++){
            if(arr[i] % 2 == 0){
                even++;
                totalOdd = (totalOdd + odd) % MOD;
            }
            else{
                odd++;
                totalOdd = (totalOdd + even ) % MOD; 
            }
        }

        return totalOdd;
    };
};