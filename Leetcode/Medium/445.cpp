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
        ListNode* newl1 = NULL;
        ListNode* newl2 = NULL;
        while(l1){
            ListNode* n = l1->next;
            l1->next = newl1;
            newl1 = l1;
            l1 = n;
        }
        while(l2){
            ListNode* n = l2->next;
            l2->next = newl2;
            newl2 = l2;
            l2 = n;
        }
        int carry = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* l = dummy;
        while (newl1 || newl2) {
            int sum = carry;
            if (newl1) {
                sum += newl1->val;
                newl1 = newl1->next;
            }
            if (newl2) {
                sum += newl2->val;
                newl2 = newl2->next;
            }
            
            if (sum > 9) {
                carry = 1;
                sum = sum % 10;
            }
            else {
                carry = 0;
            }

            l->next = new ListNode(sum);
            l = l->next;
        }
        
        if (carry) {
            l->next = new ListNode(carry);
        }
        dummy = dummy->next;
        ListNode* newHead = NULL;
        while(dummy){
            ListNode* n = dummy->next;
            dummy->next = newHead;
            newHead = dummy;
            dummy = n;
        }
        return newHead;
    }
};