// #include<string>
class Solution {

    int sum = 0;

public:
    int romanToInt(string s) {

        for (int i = 0; i < s.size(); i++) {
            if (roman(s[i]) < roman(s[i + 1])) {
                sum -= roman(s[i]);
            } else {
                sum += roman(s[i]);
            }
        }
        return sum;
    }

    int roman(char ch) {
        switch (ch) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }
};