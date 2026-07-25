class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int write = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == 0){
                swap(nums[write], nums[i]);
                write++;
            }
        }
        for (int i = 0; i < n; i++){
            if (nums[i] == 1){
                swap(nums[write], nums[i]);
                write++;
            }
        }
        for (int i = 0; i < n; i++){
            if (nums[i] == 2){
                swap(nums[write], nums[i]);
                write++;
            }
        }
        
    }
};