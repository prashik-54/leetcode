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

        for(int i=0;i<k;i++){
            if(isvowel(s[i])) vowel++;
        }
        maxVowel=vowel;

        for(int i=k;i<n;i++){
            if(isvowel(s[i])) vowel++;
            if(isvowel(s[i-k])) vowel--;
            maxVowel=max(maxVowel,vowel);
        }

        return maxVowel;
    }
};