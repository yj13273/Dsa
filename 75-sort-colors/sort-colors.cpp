class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Optimzation by removing redunant passing
        int n = nums.size();
        int write = 0;
        int key = 0;
        //i range before: 0,1,2
        //Processing 2 is unnecessary so i = 0,1 is sufficient
        for (int i = 0; i < 2; i++){
            for (int i = write; i < n; i++){
                if (nums[i] == key){
                    swap(nums[write], nums[i]);
                    write++;
                }
            }
            key++;
        }
    }
};