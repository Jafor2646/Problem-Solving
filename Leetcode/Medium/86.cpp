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
    ListNode* partition(ListNode* head, int x) {
        ListNode* fdummy = new ListNode(0);
        ListNode* bdummy = new ListNode(0);
        ListNode* front = fdummy;
        ListNode* back = bdummy;
        ListNode* temp = head;
        while(temp != NULL){
            if(temp->val < x){
                front->next = temp; 
                front = front->next;
            } 
            else{
                back->next = temp; 
                back = back->next;
            } 
            temp = temp->next;
        }
        front->next = bdummy->next;
        back->next = NULL;
        return fdummy->next;
    }
};