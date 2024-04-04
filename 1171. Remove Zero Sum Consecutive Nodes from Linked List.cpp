Question :: 1171. Remove Zero Sum Consecutive Nodes from Linked List

Given the head of a linked list, we repeatedly delete consecutive sequences of nodes that sum to 0 until there are no such sequences.
After doing so, return the head of the final linked list.  You may return any such answer.
 
Solution::

Complexity::

Time complexity : O(N)

Space complexity : O(N)

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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefix = 0 ;
        unordered_map<int ,ListNode* > m;
        ListNode* temp = new ListNode(0,head);
        m[0] = temp;
        while(head){
            prefix += head->val;
            m[prefix] = head;
            head= head->next;
        }
        head = temp;
        prefix =0 ; 
        while(head){
            prefix += head->val;
            head->next = m[prefix]->next;
            head = head->next;
        }
        return temp->next;

    
    }
};