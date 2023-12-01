
1611. Minimum One Bit Operations to Make Integers Zero
Given an integer n, you must transform it into 0 using the following operations any number of times:

Change the rightmost (0th) bit in the binary representation of n.
Change the ith bit in the binary representation of n if the (i-1)th bit is set to 1 and the (i-2)th through 0th bits are set to 0.
Return the minimum number of operations to transform n into 0. 

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
    int minimumOneBitOperations(int n) {
        vector<long long>f(31);
        f[0] =1;
        for(int i=1;i<31;i++)f[i] = 2 * f[i-1] + 1;

        int ans =0;
        int plus = 1;
        for(int j=30;j>=0;j--){
            bool is_jth_bit_set  = ((1<<j)&n) != 0;
            if(!is_jth_bit_set)continue;
            if(plus) ans +=f[j];
            else ans -=f[j];
            plus^=1;
        }
        return ans;
    }
};