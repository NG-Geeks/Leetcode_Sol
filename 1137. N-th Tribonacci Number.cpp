Question ::  1137. N-th Tribonacci Number

The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.
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

// approach 1
class Solution {  
public:
    int tribonacci(int n) {
         if(n==0)return 0;
        if(n==1 or n==2)return 1;
        vector<int>dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
       
        for(int i=3;i<=n;i++){
           dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};

//Approach 2
class Solution {
public:
    int tribonacci(int n) {
        if(n==0)return 0;
        if(n==1 || n==2)return 1;
        int a = 0, b = 1 , c = 1;
        int sum = 0;
        for(int i=3 ; i<=n ; i++){
            sum = a + b + c;
            a= b;
            b = c;
            c = sum;

        }
        return sum;
    }
};