class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
        int sum=0;
        int tsum=0;
        int miss=0;
        
        for(int i=0;i<n;i++){
            sum=sum+nums[i];

        }
        tsum=n*(n+1)/2;
        miss=tsum-sum;
        return miss;
    }
};