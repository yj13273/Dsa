class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[write], nums[i]);
                write++;
            }
        }
    }
};