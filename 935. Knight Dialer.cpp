
935. Knight Dialer
The chess knight has a unique movement, it may move two squares vertically and one square horizontally, or two squares horizontally and one square vertically (with both forming the shape of an L). The possible movements of chess knight are shown in this diagaram:


Solution::
#define mod 1000000007
#pragma gcc optmize("03");
auto init =[](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
vector<vector<int>>jumps{
  {4,6} ,{6,8},{7,9},{4,8},{0,3,9},{},{1,7,0},{2,6},{1,3},{4,2}
};
vector<vector<long long>>dp;
long long solve(int rem , int digit){
    if(rem == 0 )return 1;

    if(dp[rem][digit]!=-1)return dp[rem][digit];
    long long ans=0;
    for(auto next:jumps[digit]){
        ans = (ans + solve(rem-1 , next))%mod;
    }
    return dp[rem][digit] = ans%mod;
}
int solvetab(int n){
    // vector<vector<int>>dp(n+1,vector<int>(10,0));
    // for(int i=0;i<10;i++){
    //     dp[0][i] =1;

    // }
    vector<int>prev(10,1);
    vector<int>curr(10,0);

    for(int rem=1;rem<n;rem++){
        for(int digit =0;digit<10;digit++){
             long long ans=0;
            for(auto next:jumps[digit]){
                ans = (ans + prev[next])%mod;
            }
            curr[digit] = ans%mod;
        }
        prev = curr;
    }
    long long ans=0;
    for(int i=0;i<10;i++){
        ans = (ans+prev[i])%mod;
    }
    return ans%mod;
}
class Solution {
public:
    int knightDialer(int n) {
        // dp.resize(n+1,vector<long long>(10,-1));
        // int ans=0;
        // for(int i=0;i<10;i++){
        //     ans= (ans+ solve(n-1 ,i))%mod;
        // }
        // return ans;
        return solvetab(n);
    }
};
