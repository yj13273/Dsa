class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        int max_sum = nums[0];
        int sum = nums[0];
        for (int i = 1; i < n; i++){
            sum = max(nums[i], nums[i] + sum);
            if (sum > max_sum) max_sum = sum;
        }
        return max_sum;
    }
};