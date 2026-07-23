class Solution {
    public int uniqueXorTriplets(int[] nums) {
        int n = nums.length;
        if(n==1) return 1;
        if(n==2) return 2;

        int temp=0;
        int i =0;
        while(n>=temp){
            temp = (int) Math.pow(2,i);
            i++;
        }
        return temp;
    }
}