class Solution {
    public boolean isValid(String str1) {
        Stack<Character> cStack = new Stack<>();

        for (int i = 0; i < str1.length(); i++) {
            Character ch = str1.charAt(i);
            if (ch == '(' || ch == '{' || ch == '[') {
                cStack.push(ch);
            } else {
                if (cStack.isEmpty()) {
                    return false;
                } else {
                    Character ch2 = cStack.pop();
                    switch (ch) {
                        case ']' -> {
                            if (ch2 != '[') {
                                return false;
                            }
                        }
                        case ')' -> {
                            if (ch2 != '(') {
                                return false;
                            }
                        }
                        case '}' -> {
                            if (ch2 != '{') {
                                return false;
                            }
                        }

                    }

                }
            }
        }
        return cStack.isEmpty();
    }
}