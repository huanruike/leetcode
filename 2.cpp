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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int tag=0;
        ListNode *l=new ListNode(0);
        ListNode *p=l;
        for(ListNode *p1=l1,*p2=l2;p1!=NULL||p2!=NULL||tag;){
            p->next=new ListNode(tag);
            p=p->next;
            if(p1!=NULL){
                p->val+=p1->val;
                p1=p1->next;
            }
            if(p2!=NULL){
                p->val+=p2->val;
                p2=p2->next;
            }
            tag=p->val/10;
            p->val%=10;
        }
        return l->next;
    }
};
