class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int el = 0, cnt = 0;

        // Phase 1: Find a candidate using Boyer-Moore Voting Algorithm
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                el = nums[i];
                cnt = 1;
            } else if (nums[i] == el) {
                cnt++;
            } else {
                cnt--;
            }
        }

        // Phase 2: Verify if the candidate is actually the majority
        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == el) {
                cnt1++;
            }
        }

        if (cnt1 > n / 2) {
            return el;
        }

        return -1;  // No majority element found
    }
};
