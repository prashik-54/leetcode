class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 1;
        if(n==2) return 2;
        int temp;
        int i =0;
        while(n>=temp){ //temp is for 2 prower
            temp = pow(2,i);
            i++;
        }
        return temp;
    }
};