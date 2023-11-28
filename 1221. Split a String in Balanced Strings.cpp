
1727. Largest Submatrix With Rearrangements

1221. Split a String in Balanced Strings

Balanced strings are those that have an equal quantity of 'L' and 'R' characters.

Given a balanced string s, split it into some number of substrings such that:

Each substring is balanced.
Return the maximum number of balanced strings you can obtain.

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
    int balancedStringSplit(string s) {
       int  cnt=0;
       int  ans =0;
       for(char i:s){
           if(i=='L'){
               cnt++;
           }
           else{
               cnt--;
           }
           if(cnt==0)ans++;
       }
       return ans;
    }
};