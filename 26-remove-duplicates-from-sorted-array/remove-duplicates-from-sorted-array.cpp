class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0;  // Pointer for the last unique element

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;                 // Move pointer to next position
                nums[i] = nums[j];   // Replace with new unique value
            }
        }

        return i + 1;  // Length of unique elements
    }
};
