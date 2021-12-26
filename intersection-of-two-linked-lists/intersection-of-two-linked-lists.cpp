/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int sizeA=0,sizeB=0;
        ListNode*temp=headA;
        while(temp)
        {
            sizeA++;
            temp=temp->next;
        }
        temp=headB;
        while(temp)
        {
            sizeB++;
            temp=temp->next;
        }
        int extra=abs(sizeA-sizeB);
        if(sizeA>=sizeB)
        {
            while(extra--)
            {
                headA=headA->next;
            }
        }
        else
        {
            while(extra--)
            {
                headB=headB->next;
            }
        }
        while(headA && headB)
        {
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};