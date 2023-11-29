
1717. Maximum Score From Removing Substrings

You are given a string s and two integers x and y. You can perform two types of operations any number of times.

Remove substring "ab" and gain x points.
For example, when removing "ab" from "cabxbae" it becomes "cxbae".
Remove substring "ba" and gain y points.
For example, when removing "ba" from "cabxbae" it becomes "cabxe".
Return the maximum points you can gain after applying the above operations on s.

Solution::
#pragma gcc optimize("03")
auto init = []()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution
{
public:
    int getScore(string str, int val, string &st, char first, char second)
    {
        int ans = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (st.size() && str[i] == second && st[st.size() - 1] == first)
            {
                st.pop_back();
                ans += val;
            }
            else
            {
                st.push_back(str[i]);
            }
        }
        return ans;
    }

    int maximumGain(string str, int x, int y)
    {
        int score = 0;
        if (x > y)
        {
            string str2 = "";
            score += getScore(str, x, str2, 'a', 'b');

            str = "";
            score += getScore(str2, y, str, 'b', 'a');
        }
        else
        {
            string str2 = "";
            score += getScore(str, y, str2, 'b', 'a');

            str = "";
            score += getScore(str2, x, str, 'a', 'b');
        }
        return score;
    }
};