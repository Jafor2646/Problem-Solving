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
    int count(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* nodeAt(ListNode* head, int idx){
        ListNode* temp = head;
        int c = 0;
        while(temp != NULL){
            if(c == idx){
                return temp;
            }
            c++;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int total = count(head);
        if(n > total || n < 1){
            return head;
        }
        if(n == total){
            head = head->next;
            return head;
        }else if(n == 1){
            ListNode * x = nodeAt(head, total-n-1);
            x->next = NULL;
            return head;
        }else{
            ListNode* x = nodeAt(head, total-n-1);
            ListNode* x1 = x->next;
            x->next = x1->next;
            return head;
        }
        
    }
};