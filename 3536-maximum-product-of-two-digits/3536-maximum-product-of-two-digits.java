class Solution {
    public int maxProduct(int n) {
        String str = Integer.toString(n);
        int len = str.length();
        char[] chars = str.toCharArray();
        
        Arrays.sort(chars);

        return (chars[len-1]-'0')*(chars[len-2]-'0');
    }
}