class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        // Get the total number of elements in the input vector
        int n = nums.size();
        
        // Base case: If there is only 1 element, it can form 1 unique configuration
        if(n == 1) return 1;
        
        // Base case: If there are 2 elements, they can form 2 unique configurations
        if(n == 2) return 2;
        
        int temp;
        int i = 0;
        
        // Find the smallest power of 2 that is strictly greater than n
        while(n >= temp) { 
            // Calculate 2 raised to the power of i (2^i)
            temp = pow(2, i); 
            
            // Increment the exponent for the next iteration
            i++; 
        }
        
        // Return the calculated power of 2
        return temp; 
    }
};
