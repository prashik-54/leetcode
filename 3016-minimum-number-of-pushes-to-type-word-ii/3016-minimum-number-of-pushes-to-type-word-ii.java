class Solution {
    public int minimumPushes(String word) {
        int n = word.length();
        Map<Character, Integer> freq = new HashMap<>(); // character and its frequency
        
        for (int i = 0; i < word.length(); i++) {
            char ch = word.charAt(i);
            freq.put(ch, freq.getOrDefault(ch, 0) + 1);
        }
        
        // push all frequency in list
        List<Integer> v = new ArrayList<>(); // frequency of char in descending order
        for (Map.Entry<Character, Integer> ele : freq.entrySet()) {
            v.add(ele.getValue());
        }
        
        // sorting in descending order
        v.sort(Collections.reverseOrder());
        
        int sum = 0;
        int count = 1;
        int keys = 1;
        
        for (int i = 0; i < v.size(); i++) {
            if (keys <= 8) {
                int temp = count * v.get(i);
                sum += temp;
                keys++;
            }
            if (keys > 8) {
                count++;
                keys = 1;
            }
        }
        
        return sum;
    }
}