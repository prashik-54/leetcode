class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {
        int n=s.size();

        int maxVowel=0;
        int vowel=0;
        //first window
        for(int i=0;i<k;i++){
            if(isvowel(s[i])) vowel++;
        }
        maxVowel=vowel;
        //sliding window
        for(int i=k;i<n;i++){
            if(isvowel(s[i])) vowel++;
            if(isvowel(s[i-k])) vowel--;
            maxVowel=max(maxVowel,vowel);
            
            //early stoping
            if(maxVowel==k) return maxVowel;
        }

        return maxVowel;
    }
};