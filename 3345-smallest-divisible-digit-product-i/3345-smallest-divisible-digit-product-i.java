class Solution {
    public int smallestNumber(int n, int t) {
        while(true){
            int temp = n;
            int product = 1;
            while(temp > 0){
                int idx = temp%10;
                product *= idx;
                temp /= 10;
            }
            if(product%t==0) return n;
            else n+=1;
        }
    }
}