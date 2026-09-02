class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        //check if all are even or odd
        bool allOdd = true;
        bool allEven = true;

        for(int i = 0; i<n;i++){
            if(nums1[i]%2==0) allOdd = false; //even elem present means not all odd  
            else allEven = false;
        }

        if(allEven || allOdd) return true;

        int minOdd = INT_MAX;
        int minEven = INT_MAX;
        for(int i = 0; i<n ;i++){
            if(nums1[i]%2==0){
                minEven = min(minEven , nums1[i]);
            }
            else{
                minOdd = min(minOdd , nums1[i]);
            }
        }
        
        //now try to make all odd
        for(int i =0;i<n;i++){
            if(nums1[i]%2==0){
                if(nums1[i]-minOdd < 0) return false;
            }
        }

        return true;
    }
};