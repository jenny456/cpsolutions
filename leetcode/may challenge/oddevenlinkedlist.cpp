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
    ListNode* oddEvenList(ListNode* head) {
        // ListNode* oddhead=null;
        // ListNode* oddnext=null;
        // ListNode* evenhead=null;
        // ListNode* evennext=null;
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* evenhead=head->next;
        ListNode* even=head->next;
        ListNode* odd=head;
        while(even && even->next) 
        {
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return  head;
        
    }
};