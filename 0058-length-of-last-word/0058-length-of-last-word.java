class Solution {
    public int lengthOfLastWord(String s) {
        String[] str1 = s.split(" ");
        
        int size = str1.length;
        String str2 = str1[size - 1];

        return str2.length();
    }
}