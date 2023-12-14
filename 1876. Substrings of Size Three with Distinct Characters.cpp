
1876. Substrings of Size Three with Distinct Characters
A string is good if there are no repeated characters.
Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.
Note that if there are multiple occurrences of the same substring, every occurrence should be counted.
A substring is a contiguous sequence of characters in a string.

 
Solution::
Approach
    Approach is clear ,Just check the string as per given condition
Complexity
Time complexity:
     O(n)
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
    int countGoodSubstrings(string s) {
        int count=0, n = s.size();
        for(int i=0; i<=n-3; i++){
            if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1] != s[i+2]){
                count++;
            }
        }
        return count;
    }
};
  