
1470. Shuffle the Array

Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn]. piles[i] is the number of coins in the ith pile.

#pragma GCC optimize("03")
class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        int i = 1 ;
	    while(i<n){
	        for(int k =i , j= n; j < 2*n-i;j++,k++ ){
	            swap(arr[j] , arr[k]);
	        }
	        i++;
	    }
        return arr;
    }
};auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();