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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x=0;
        ListNode *ans=NULL;
        ListNode **node=&ans;
        
        while(l1!=NULL or l2!=NULL or x!=0){
            if(l1!=NULL){
                x+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                x+=l2->val;
                l2=l2->next;
            }
            int val=x%10;
            x/=10;
            *node=new ListNode(val);
            node=&((*node)->next);
        }
        return ans;
    }
};
