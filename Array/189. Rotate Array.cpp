#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    /* Approach 1: O(n) time, O(n) space
       1. Create a new array and place the first (if left rotate) or last (if right rotate) 
          k elements in a new array.
       2. Shift the elements left or right k places.
       3. Append the separate vector elements.

       Use two separate functions: ShiftLeft() and ShiftRight()
    */

    /* Approach 2: O(n) time, O(n) space, but more efficient than approach 1.
       If the size of array is n, then shifting k spaces right is equivalent to
       shifting (n - k) spaces left.
       Thus we can use if-else to determine left or right and use only one function Shift().
    */


    /* Approach 3: O(n) time, O(1) space
        Reverse the entire array,
        then reverse the first k elements,
        then reverse the remaining (n - k) elements.
    */

    // Left rotation by k
    void ApproachLeft(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k = k % n;
        if (k == 0) return;

        // Store first k elements
        vector<int> v;
        for (int i = 0; i < k; i++) {
            v.push_back(nums[i]);
        }

        // Shift remaining elements to the left
        for (int i = k; i < n; i++) {
            nums[i - k] = nums[i];
        }

        // Append stored elements at the end
        for (int i = 0; i < k; i++) {
            nums[n - k + i] = v[i];
        }
    }

    // Right rotation by k
    void ApproachRight(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k = k % n;
        if (k == 0) return;

        // Store last k elements
        vector<int> v;
        for (int i = n - k; i < n; i++) {
            v.push_back(nums[i]);
        }

        // Shift remaining elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Place stored elements at the front
        for (int i = 0; i < k; i++) {
            nums[i] = v[i];
        }
    }

    void rotateRight(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if (k == 0) return;
        int temp;
        for (int i = 0; i < (n/2); i++){
            temp = nums[i];
            nums[i] = nums[n-i-1];
            nums[n-i-1] = temp;
        }
        for (int i = 0; i < k/2; i++){
            temp = nums[i];
            nums[i] = nums[k-i-1];
            nums[k-i-1] = temp;
        }
        for (int i = k; i < (n+k)/2; i++){
            temp = nums[i];
            nums[i] = nums[n+k-i-1];
            nums[n-i+k-1] = temp;
        }
    }
        
    // Utility function to print the array
    void print(vector<int>& nums) {
        for (int x : nums) cout << x << " ";
        cout << endl;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    Solution s;

    cout << "Original array: ";
    s.print(nums);

    s.ApproachLeft(nums, 2);
    cout << "After left rotation by 2: ";
    s.print(nums);

    s.ApproachRight(nums, 3);
    cout << "After right rotation by 3: ";
    s.print(nums);

    return 0;
}
