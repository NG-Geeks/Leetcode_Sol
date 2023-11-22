2391. Minimum Amount of Time to Collect Garbage

You are given a 0-indexed array of strings garbage where garbage[i] represents the assortment of garbage at the ith house. garbage[i] consists only of the characters 'M', 'P' and 'G' representing one unit of metal, paper and glass garbage respectively. Picking up one unit of any type of garbage takes 1 minute.
You are also given a 0-indexed integer array travel where travel[i] is the number of minutes needed to go from house i to house i + 1.
There are three garbage trucks in the city, each responsible for picking up one type of garbage. Each garbage truck starts at house 0 and must visit each house in order; however, they do not need to visit every house.
Only one garbage truck may be used at any given moment. While one truck is driving or picking up garbage, the other two trucks cannot do anything.

Return the minimum number of minutes needed to pick up all the garbage.

#pragma GCC optimize("O3")
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) 
    {
        int n=garbage.size();
        int tG=0, tP=0, tM=0;
        int time=0; 
        #pragma unroll
        for(int i=n-1; i>=0; i--){
            //time for collecting garbage
            string x=garbage[i];
            time+=x.size();
            if (tG==0 && x.find('G')!=-1) tG=i;
            if (tP==0 && x.find('P')!=-1) tP=i;
            if (tM==0 && x.find('M')!=-1) tM=i;
        }
        // Add travel time
        time+=accumulate(travel.begin(), travel.begin()+(tG),0)
            +accumulate(travel.begin(), travel.begin()+(tP),0)
            +accumulate(travel.begin(), travel.begin()+(tM),0);
        return time;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();