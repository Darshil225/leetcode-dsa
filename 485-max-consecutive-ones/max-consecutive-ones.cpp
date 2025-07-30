class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n =nums.size();

       int sum=0,maxi=0;

       for(int i=0;i<n;i++){
        if(nums[i]==1){
            sum++;
        }

        else{
            if(sum>maxi){
                maxi=sum;
            }
            sum=0;
        }
       }
        if(sum>maxi){
            maxi=sum;

        }
        
    return maxi;
    }
    };

