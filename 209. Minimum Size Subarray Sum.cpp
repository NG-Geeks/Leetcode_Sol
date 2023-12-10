
209. Minimum Size Subarray Sum

Given an array of positive integers nums and a positive integer target, return the minimal length of a 
subarray
 whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.


Solution::
Approach
    1. Start from the index =0 . 
    2. Count the sum till the value of the sum is not greater or 
         equal to the target .
    3. Ones the cursum is greater or equal to the target then 
        store  the index differences to store the size of the length
    4. Now increment the start pointer to find the next value
        and decrease the value from cursum.
Complexity
Time complexity:
    O(N)
Space complexity:
    O(1)
Code
#pragma gcc optimize("03")
auto init =[](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int cursum =0;
        int findex =0;
        int ans = INT_MAX;
        for(int i=0 ;i<nums.size();i++){
            cursum += nums[i];
            while(cursum>=target){
                ans = min(ans , i+1 - findex);
                cursum -= nums[findex++];// as no more combination can be made through findex so incrementing it and deleting the value from cursum

            }
        }
        return (ans == INT_MAX)?0:ans;
    }
};