class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        stack<int>score;
        score.push(0);
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                score.push(0);
            }
            else{
                int currScore = score.top();
                score.pop();
                int evaluatedScore = 0;
                if(currScore == 0){ // ()
                    evaluatedScore = 1;
                }
                else{
                    evaluatedScore = currScore * 2; //(A)
                }

                score.top() += evaluatedScore;
            }
        }

        return score.top();
    }
};