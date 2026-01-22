class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
       
       int cnt=0;
       int can=0;

       for(int i=0;i<n;i++){
        if(cnt==0){
            can=nums[i];
            cnt=1;
        }

        else if(nums[i]==can){
            cnt++;
        }

        else{
            cnt--;
        }
       }
       return can;
     
    }
};
