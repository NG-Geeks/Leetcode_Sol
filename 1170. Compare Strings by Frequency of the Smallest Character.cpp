
1170. Compare Strings by Frequency of the Smallest Character

Let the function f(s) be the frequency of the lexicographically smallest character in a non-empty string s. For example, if s = "dcce" then f(s) = 2 because the lexicographically smallest character is 'c', which has a frequency of 2.

You are given an array of strings words and another array of query strings queries. For each query queries[i], count the number of words in words such that f(queries[i]) < f(W) for each W in words.

Return an integer array answer, where each answer[i] is the answer to the ith query.
Solution::
#pragma gcc optimize("03")
auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
       int f(string word)
    {
        sort(begin(word),end(word));
         int cnt=1;
         for(int i=0;i<word.size()-1;i++){
             if(word[i]!=word[i+1])return cnt;
             else cnt++;
         }
        return cnt;
    }
    public:

    vector<int> numSmallerByFrequency(vector<string>& nums1, vector<string>& nums2) {
        vector<int> ans(nums1.size(),0);
        vector<int> res(nums2.size());
        for(int i=0;i<nums2.size();i++)
        {
            res[i] = f(nums2[i]);
        }
        sort(res.begin(),res.end());
        for(int i=0;i<nums1.size();i++)
        {
            int x = f(nums1[i]);
            int y = upper_bound(res.begin(),res.end(),x) - res.begin();
            ans[i] = res.size()-y;
            
        }
        return ans; 
    }
};