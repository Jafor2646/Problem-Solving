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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead = new ListNode(0);
        newHead->next = head;
        ListNode *temp = newHead;
        ListNode* nextNode = NULL;
        while(temp->next && temp->next->next){
            ListNode* curr = temp->next;
            nextNode = curr->next;
            curr->next = nextNode->next;
            nextNode->next = curr;
            temp->next = nextNode;
            temp = curr;
        }
        return newHead->next;    
    }
};