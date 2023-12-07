
1262. Greatest Sum Divisible by Three
Given an integer array nums, return the maximum possible sum of elements of the array such that it is divisible by three.

Solution::
Approach ::
        Recurvise iterate over element in array .
        There are two choices whether take or nottake.
        if(taken then check whether divisible by 3 or not)
          if divisble then go on otherwise check for other relation.

Complexity
Time complexity:
     O(2*N)
Space complexity:
     O(N)

Code:: 

#pragma gcc optimize("03")
auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
    vector<vector<int>>dp;
    int solve(vector<int>& nums,int i,int sum){
        if(i >= nums.size()){
            if(sum == 0)
                return 0;
            return INT_MIN;
        }
        if(dp[i][sum] != -1)
            return dp[i][sum];
        int take = nums[i] + solve(nums,i+1,(sum + nums[i])%3);
        int notTake = solve(nums,i+1,sum);
        return dp[i][sum] = max(take,notTake);
    }
public:
    int maxSumDivThree(vector<int>& nums) {
         int ans=0;
        dp = vector<vector<int>>(nums.size(),vector<int>(3,-1));

        return  solve(nums,0 , 0 );
        
         return ans;
    }
};