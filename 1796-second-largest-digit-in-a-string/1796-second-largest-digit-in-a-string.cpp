class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        int largest=-1;
        int secondLargest =-1;
        for(int i=0;i<n;i++){
            if(!isalpha(s[i])){
                int num=s[i]-'0';
                if(num>largest){
                    secondLargest=largest;
                    largest=num;
                }
                else if(num>secondLargest && num!=largest){
                    secondLargest=num;
                }
            }
        }
        return secondLargest;
    }
};