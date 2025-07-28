class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // In case k > n

        vector<int> temp(n);

        // Copy last k elements to beginning
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }

        // Copy first n-k elements after that
        for (int i = k; i < n; i++) {
            temp[i] = nums[i - k];
        }

        // Copy everything back to nums
        for (int i = 0; i < n; i++) {
            nums[i] = temp[i];
        }
    }
};
