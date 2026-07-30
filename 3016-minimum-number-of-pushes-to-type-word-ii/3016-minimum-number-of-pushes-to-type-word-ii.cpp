class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();

        unordered_map<char , int > freq; //char and its frequency

        for(auto ch : word){
            freq[ch]++;
        }
        //push all frequncy in vector
        vector<int>v; //frequncy of char in decending order
        for(auto ele : freq){
            v.push_back(ele.second);
        }
        
        sort(v.begin(), v.end() , greater<int>()); //sorting in decending order
        int sum =0;
        int count = 1;
        int keys = 1;
        for(int i =0;i<v.size();i++){
            if(keys<=8){
                int temp = count*v[i];
                sum+= temp;
                keys++;

            }
            if(keys>8){
                count++;
                keys = 1;
            }
        }

        return sum;


    }
};