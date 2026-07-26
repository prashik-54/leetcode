class Solution {
    public boolean allzero(int [] freq){
        for(int ele : freq){
            if(ele!=0) return false;
        }
        return true;
    }
    public List<Integer> findAnagrams(String s, String p) {
        int k =p.length();
        int n = s.length();
         List<Integer>ans = new ArrayList<>();
        if(n<k) return ans;
        int[] freq = new int[26];
        for(int i = 0;i<k;i++){
            freq[p.charAt(i)-'a']++;
        }
       
        //checking first window
        for(int i = 0;i<k;i++){
            freq[s.charAt(i)-'a']--;
        }
        if(allzero(freq)){
            ans.add(0);
        }

        //now chacking remaining windows
        for(int i =k;i<n;i++){
            freq[s.charAt(i)-'a']--; //--means we are addind
            freq[s.charAt(i-k)-'a']++; //++ means we are removind
            if(allzero(freq)){
                ans.add(i-k+1);
            }
        }
        return ans;

    }
}