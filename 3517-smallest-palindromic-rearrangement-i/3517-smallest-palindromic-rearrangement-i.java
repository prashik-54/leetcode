class Solution {
    public String smallestPalindrome(String s) {
        int n = s.length();
        int mid = n/2;

        char[] chars = s.toCharArray();

        Arrays.sort(chars ,0, mid);

        s = new String(chars);

        char[] finalchars = s.toCharArray();
        for(int i = 0;i<mid;i++){
            finalchars[n-1-i] = finalchars[i];
        }
        String ans = new String(finalchars);
        return ans;
    }
}