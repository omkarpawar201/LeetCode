class Solution {
    public static int missingNumber(int[] nums) {
        int sumOfNNum = 0;
        int sumOfArray = 0;

        for (int i = 0; i <= nums.length; i++) {
            sumOfNNum += i;
            if (i < nums.length) {
                sumOfArray += nums[i];
            }
        }

        return sumOfNNum - sumOfArray;
    }
}