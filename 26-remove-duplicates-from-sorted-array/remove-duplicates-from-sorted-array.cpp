class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int write = 1;
        int value = nums[0];
        for (int read = 0; read < n; read++){
            if (nums[read] != value){
                nums[write] = nums[read];
                write++;
                value = nums[read];
            }
        }
        return write;
    }
};