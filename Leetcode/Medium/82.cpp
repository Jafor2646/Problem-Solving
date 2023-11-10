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
        // if(head == NULL || head->next == NULL) return head;
        // ListNode* last = head;
        // ListNode* curr = last->next;
        // if(curr->next == NULL){
        //     if(last->val == curr->val) return curr->next;
        //     else return head;
        // }
        // bool flag = false;
        // int count = 0, check = 0;
        // while(curr != NULL){
        //     if(curr->val == last->val){
        //         flag = true;
        //         last->next = curr->next;
        //         check++;
        //     }else{
        //         if(flag){
        //             if(last == head){
        //                 head = head->next; 
        //             } 
        //             else{
        //                 ListNode* sLast = head;
        //                 while(sLast->next != last) sLast = sLast->next;
        //                 sLast->next = last->next;
        //                 last = curr;
        //             }
        //             flag = false;
        //         }else{
        //             last = curr;
        //         }
        //     }
        //     curr = curr->next;
        //     count++;
        // }
        // ListNode*temp = head->next;
        // if(temp != NULL &&temp->next == NULL){
        //     if(head->val == temp->val) return NULL;
        // }
        // if(flag){
        //     ListNode* temp = head;
        //     while(temp->next && temp->next->next != NULL) temp = temp->next;
        //     ListNode* temp1 = temp->next;
        //     temp->next = temp1->next;
        // }
        // return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = dummy;
        int duplicate;
        while (cur->next && cur->next->next) {
            if (cur->next->val == cur->next->next->val) {
                duplicate = cur->next->val;
                while (cur->next && cur->next->val == duplicate) 
                    cur->next = cur->next->next;
            }
            else cur = cur->next;
        }
        return dummy->next;
    }
};