
2190. Most Frequent Number Following Key In an Array

You are given a 0-indexed integer array nums. You are also given an integer key, which is present in nums.

For every unique integer target in nums, count the number of times target immediately follows an occurrence of key in nums. In other words, count the number of indices i such that:

0 <= i <= nums.length - 2,
nums[i] == key and,
nums[i + 1] == target.
Return the target with the maximum count. The test cases will be generated such that the target with maximum count is unique.


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
    return 0;
}();
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>m;
        int ans =0;
        int k = 0;
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()-1 && nums[i]== key){
                m[nums[i+1]]++; // store the count of the number
                if(m[nums[i+1]]>k){ // check  if the count is greater then previous value
                    ans = nums[i+1]; // initialize the ans 
                    k = m[nums[i+1]];// store the max count of the number
                }
            }
        }
 
        
        return ans;
    }
};