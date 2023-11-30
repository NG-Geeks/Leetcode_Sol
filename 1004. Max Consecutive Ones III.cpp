
1004. Max Consecutive Ones III

Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
 

Solution::
#pragma gcc optimize("03")
auto init =[](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int high =0;
        int low =0;
        int cnt=0;
        int maxi =0;
        while(high<nums.size() && low<=high){
            while(high<nums.size() && cnt<=k){
                if(nums[high]==0)cnt++;
                if(cnt<=k){
                    int window = high - low +1;
                    maxi = max(maxi , window);
                }
                high++;
            }
            while(cnt>k){
                if(nums[low]==0)cnt--;
                low++;
            }
        }
        return maxi;
    }
};