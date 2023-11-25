
384. Shuffle an Array

Given an integer array nums, design an algorithm to randomly shuffle the array. All permutations of the array should be equally likely as a result of the shuffling.
Implement the Solution class:
Solution(int[] nums) Initializes the object with the integer array nums.
int[] reset() Resets the array to its original configuration and returns it.
int[] shuffle() Returns a random shuffling of the array.

Solution:: 
#pragma gcc optimize("03")
class Solution {
    vector<int>v ;
public:
    Solution(vector<int>& nums) {
        v = nums;
    }
    
    vector<int> reset() {
        return v;
    }
    
    vector<int> shuffle() {
        vector<int>shuffled = v;
        int n = shuffled.size();
        int left = n;
        for(int  i = n-1 ; i>=0 ; i--){
            int j =rand()%left;
            swap(shuffled[i] , shuffled[j]);
            left--;

        }
        return shuffled;
    }
};

auto init = [](){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  return 'c';
}();