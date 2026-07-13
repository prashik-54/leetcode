class Solution {
public:
    int count = 0; //global veriable
    int numberOfSteps(int num) {
        if(num==0){
            return count;
        }
        if(num%2!=0){ //odd num -> n-1
            count++;
            return numberOfSteps(num-1);
        }
        else{ //even num -> n/2
            count++;
            return numberOfSteps(num/2);
        }
    }
};