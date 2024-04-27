Question ::  1967. Number of Strings That Appear as Substrings in Word
Given an array of strings patterns and a string word, return the number of strings in patterns that exist as a substring in word.

A substring is a contiguous sequence of characters within a string.

 

Complexity::
Time complexity:
    O(N)
Space complexity:
    O(1)
Code::
#pragma gcc optmize("03")
auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt =0;
        for(int i =0 ; i<patterns.size();i++){
            if(word.find(patterns[i])!=string::npos)cnt++;
        }
        return cnt;
    }
};