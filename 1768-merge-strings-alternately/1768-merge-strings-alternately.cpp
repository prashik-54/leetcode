class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size(); //word1 size
        int m=word2.size(); //word2 size

        int idx1=0; //for word1
        int idx2=0; //for word2
        string ans="";
        int i=0;
        while(idx1 < n && idx2 < m){
            if(i % 2 == 0){
                ans+=word1[idx1];
                idx1++;
            }
            else{
                ans+=word2[idx2];
                idx2++;
            }
            i++;
        }
        //if word1 has remaining elements
        while(idx1<n){
            ans+=word1[idx1];
            idx1++;
        }
        //if word2 has remaining elements
        while(idx2<m){
            ans+=word2[idx2];
            idx2++;
        }

        return ans;
    }
};