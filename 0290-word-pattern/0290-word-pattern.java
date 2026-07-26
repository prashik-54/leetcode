
class Solution {
    public boolean wordPattern(String pattern, String s) {
        // Split the string by spaces to get individual words
        String[] words = s.split(" ");
        
        // If lengths don't match, they can't follow the same pattern
        if (words.length != pattern.length()) {
            return false;
        }
        
        // Two maps to ensure one-to-one bi-directional mapping
        HashMap<Character, String> charToWord = new HashMap<>();
        HashMap<String, Character> wordToChar = new HashMap<>();
        
        for (int i = 0; i < pattern.length(); i++) {
            char ch = pattern.charAt(i);
            String word = words[i];
            
            // Check character to word mapping
            if (charToWord.containsKey(ch) && !charToWord.get(ch).equals(word)) {
                return false;
            }
            
            // Check word to character mapping
            if (wordToChar.containsKey(word) && wordToChar.get(word) != ch) {
                return false;
            }
            
            // Establish the mappings
            charToWord.put(ch, word);
            wordToChar.put(word, ch);
        }
        
        return true;
    }
}
