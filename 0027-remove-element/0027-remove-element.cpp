class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        // vector<int> v1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};