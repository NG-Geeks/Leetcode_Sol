
1679. Max Number of K-Sum Pairs

You are given an integer array nums and an integer k.
In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.
Return the maximum number of operations you can perform on the array.

Solution::
Complexity
Time complexity:
    O(n) 
Space complexity:
    O(1)
Code
#pragma gcc optimize("03")
auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(begin(nums) ,end(nums)); // sort the array [1,2,3,4]
        int i=0 , j = nums.size()-1;
        int cnt =0;
        while(i<j){
            if(nums[i]+ nums[j] == k){ 1 + 4 =5 , 2+3 =5
                i++ ;
                j--;
                cnt++; // increment the count
            }
            else if(nums[i] + nums[j]<k){
                i++; // sum less than k so increment the left pointer so greater than previous value should be taken 
            }
            else {
                j--; // sum greater then k , decrement the right pointer
            }

        }
        return cnt  ;
    }
};
  