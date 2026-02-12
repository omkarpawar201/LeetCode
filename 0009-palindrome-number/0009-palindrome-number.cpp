class Solution {
public:
    bool isPalindrome(int x) {
        int num = x,  pallin, org = num;
        long sum = 0;
        if (org < 0) {
            return 0;
        } else {
            while(num!=0){
                pallin = num % 10;
                num = num / 10;
                sum = pallin + sum * 10;
                // cout << sum << endl;
            }
        }

        if (org == sum) {
            return 1;
        }

        else {
            return 0;
        }
    }
};