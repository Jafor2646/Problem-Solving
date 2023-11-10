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
        ListNode *temp1 = l1, *temp2 = l2, *out = NULL, *tempout = NULL;
        int carry=0;
        
        while(temp1!=NULL || temp2!=NULL || carry){
            int ad = 0;
            if(temp1!=NULL){
                ad += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2!=NULL){
                ad += temp2->val;
                temp2 = temp2->next;
            }
            ad += carry;
            int dig = ad%10;
            carry = ad/10;
             
            if(out==NULL){
                out = new ListNode(dig);
                tempout = out;
            }
            else{
               tempout->next =  new ListNode(dig);
                tempout = tempout->next;
            } 
        }
        return out;
    }
};