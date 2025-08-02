class Solution {
public:
    int maxProfit(vector<int>& nums) {

        int n=nums.size();
        
        int maxprofit=0;
        int miniprice=nums[0];

        for(int i=0;i<n;i++){

            int profit=nums[i]-miniprice;

            if(profit>maxprofit){
                maxprofit=profit;
            }

            if(nums[i]<miniprice){
                miniprice=nums[i];
            }
        }
        return maxprofit;

        }
};