

1763. Longest Nice Substring

A string s is nice if, for every letter of the alphabet that s contains, it appears both in uppercase and lowercase. For example, "abABB" is nice because 'A' and 'a' appear, and 'B' and 'b' appear. However, "abA" is not because 'b' appears, but 'B' does not.

Given a string s, return the longest substring of s that is nice. If there are multiple, return the substring of the earliest occurrence. If there are none, return an empty string.
Solution::

Approach
    1. Make and unordered_set to insert the unique character of 
       the string.
    2. Iterate through the loop and check whether the lowercase
       and uppercase character is present or not.
    3. If not then look the call recursively for the part from 
        starting to that point and for right part starting from 
        that part to end.
    4. Check for the same .
    5. Base for it when your string will contain less 2 character
         then return empty string.
    6. if the string both uppercase then it will come out of the 
       loop and the string is returned itself.

Complexity
Time complexity:
O(N)
Space complexity:
O(N)


Code:
class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.length()<2)return "";
        unordered_set<char>st;
        for(char &i:s)st.insert(i);
        
        for(int i=0;i<s.length();i++){
            char c = s[i];
             c = tolower(c);
             char ch = toupper(c);
            if(st.find(ch)==st.end() || st.find(c)==st.end()){
                string left = longestNiceSubstring( s.substr(0,i));
                string right = longestNiceSubstring(s.substr(i+1));
                return left.length()>=right.length() ?left:right;
            }
        }
        return s;
    }
};
  