2496. Maximum Value of a String in an Array


The value of an alphanumeric string can be defined as:
The numeric representation of the string in base 10, if it comprises of digits only.
The length of the string, otherwise.
Given an array strs of alphanumeric strings, return the maximum value of any string in s

 
Solution::
Approach
 Iterate thorough the vector.

 Check whether the i th string contains the alphabet and numeric 
 value. 

 If the string contains alphabet and numeric then take it's size 
 into account.

 If the string contains only numeric value then convert to it into 
 number and compare it with maxvalue.

 If only alphabet then compare the length.
Complexity
Time complexity:
    O(n)*max(length of the string)
Space complexity:
    O(1)
Code
#pragma gcc optimize("03")
auto inti = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int cnt =0;
        for(int i=0;i<strs.size();i++){
            string word = strs[i];
            bool alpha=0;
            bool digit =0;
            for(int j=0; j<word.size();j++){
                if(isalpha(word[j]))alpha =1;
                else if(isdigit(word[j]))digit =1;
            }
            if(alpha && digit){
                int l = word.size();
                cnt = max(cnt , l);
            }
            else if(digit){
                int k = stoi(word);
                cnt = max(cnt , k);
            }else{
                int k  =word.size();
                cnt = max(cnt , k);
            }
        }
        return cnt;
    }
  