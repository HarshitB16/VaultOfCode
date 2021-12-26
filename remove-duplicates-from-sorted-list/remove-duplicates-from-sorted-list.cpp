/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return head;
        ListNode*cur=head;
        ListNode*nxt=cur->next;
        while(nxt)
        {
            if(cur->val==nxt->val)
            {
                nxt=nxt->next;
            }
            else
            {
                cur->next=nxt;
                cur=cur->next;
                nxt=nxt->next;
            }
        }
        cur->next=nxt;
        return head;
    }
};