class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        unordered_map<int,int>freq; //stores frequency of each digit
        for(int i = 0; i < n; i++){
            freq[digits[i]]++;
        }
        int count = 0;
        for(int i = 100; i<=999; i+=2){
            int temp = i;
            int a = temp%10; //unit digit
            temp /= 10;
            int b = temp%10; //2nd digit
            temp /= 10;
            int c = temp%10; //3rd digit

            if(freq[a]>0){
                freq[a]--;
                if(freq[b]>0){
                    freq[b]--;
                    if(freq[c]>0){
                        count++;
                    }
                    freq[b]++;
                }
                freq[a]++;    
            }
        }
        return count;
    }
};