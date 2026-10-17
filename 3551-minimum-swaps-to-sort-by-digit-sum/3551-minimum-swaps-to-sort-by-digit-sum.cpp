class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 0;
        vector<int> temp = nums; //temp will be our actual sorted array
        sort(temp.begin(), temp.end(), [](int a, int b) {
            int sum1 = 0;
            int sum2 = 0;
            int temp1 = a;
            int temp2 = b;
            while (temp1 > 0) {
                sum1 += (temp1 % 10);
                temp1 /= 10;
            }
            while (temp2 > 0) {
                sum2 += (temp2 % 10);
                temp2 /= 10;
            }

            if (sum1 == sum2) {
                return a < b;
            } else {
                return sum1 < sum2;
            }
        });

        int total_swap = 0;
        unordered_map<int,int>mp; //will store idx of unique element in nums
        for(int i = 0; i<n; i++){
            mp[nums[i]] = i;
        }
        for(int i = 0; i<n; i++){
            int expected_val = temp[i];
            int curr_val = nums[i];
            if(curr_val != expected_val){
                int idx = mp[expected_val];

                nums[i] = expected_val;
                nums[idx] = curr_val;
                mp[expected_val] = i;
                mp[curr_val] = idx;
                total_swap++;
            }
        }
        return total_swap;
    }
};

// class Solution {
// public:

//     int getDigitSum(int num) {
//         int sum = 0;

//         while(num > 0) {
//             sum += (num % 10);
//             num /= 10;
//         }

//         return sum;
//     }

//     int minSwaps(vector<int>& nums) {
//         int n = nums.size();

//         vector<int> afterSorted(nums);

//         auto lambda = [&](int num1, int num2) {
//             int num1DigitSum = getDigitSum(num1); //log10(num)
//             int num2DigitSum = getDigitSum(num2);

//             if(num1DigitSum != num2DigitSum) {
//                 return num1DigitSum < num2DigitSum;
//             }

//             return num1 < num2;
//         };

//         sort(begin(afterSorted), end(afterSorted), lambda); //nlogn * N

//         unordered_map<int, int> valToIdx;
//         for(int i = 0; i < n; i++) { //O(n)
//             valToIdx[nums[i]] = i;
//         }

        
//         int swapCount = 0;
//         for(int i = 0; i < n; i++) { //O(n)
//             int expectedVal = afterSorted[i];
//             int currVal     = nums[i];

//             if(expectedVal == currVal) continue;

//             int idx = valToIdx[expectedVal];

//             nums[i] = expectedVal;
//             nums[idx] = currVal;

//             valToIdx[expectedVal] = i;
//             valToIdx[currVal] = idx;

//             swapCount++;
//         }

//         return swapCount;


//     }
// };