class Solution {
    public int reverseDegree(String s) {
        int n = s.length();
        int sum = 0;
        for(int i = 0; i<n; i++){
            char ch = s.charAt(i);
            int temp = (97+26-(int)ch) * (i+1);
            sum += temp;
        }
        return sum;
    }
}