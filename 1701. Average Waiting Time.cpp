Question ::1701. Average Waiting Time

There is a restaurant with a single chef. You are given an array customers, where customers[i] = [arrivali, timei]:

arrivali is the arrival time of the ith customer. The arrival times are sorted in non-decreasing order.
timei is the time needed to prepare the order of the ith customer.
When a customer arrives, he gives the chef his order, and the chef starts preparing it once he is idle. The customer waits till the chef finishes preparing his order. The chef does not prepare food for more than one customer at a time. The chef prepares food for customers in the order they were given in the input.

Return the average waiting time of all customers. Solutions within 10-5 from the actual answer are considered accepted.
 
Solution::

Complexity::

Time complexity : O(N)

Space complexity : O(1)

 Code::

#pragma gcc optimize("03")
auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double wt = 0 ;
        int t =0;
        int k=0;
        for(int i=0 ; i<customers.size() ; i++){
             k = max(k , customers[i][0]);
            t = k+customers[i][1];
            k= t;
            wt += (t - customers[i][0]); 
        }
        return (double)wt/customers.size();
    }
};
