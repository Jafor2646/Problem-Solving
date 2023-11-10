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
    ListNode* merge(ListNode* firstNode, ListNode* secondNode)
    {
        ListNode* merged = new ListNode();
        ListNode* temp = new ListNode();
    
        merged = temp;
    
        while (firstNode != NULL && secondNode != NULL) {
    
            if (firstNode->val <= secondNode->val) {
                temp->next = firstNode;
                firstNode = firstNode->next;
            }
    
            else {
                temp->next = secondNode;
                secondNode = secondNode->next;
            }
            temp = temp->next;
        }
    
        while (firstNode != NULL) {
            temp->next = firstNode;
            firstNode = firstNode->next;
            temp = temp->next;
        }
    
        while (secondNode != NULL) {
            temp->next = secondNode;
            secondNode = secondNode->next;
            temp = temp->next;
        }
        return merged->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp;
        while (fast != NULL && fast->next != NULL) {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL; 
        ListNode* finalhead = merge(sortList(head), sortList(slow));
        return finalhead;
    }
};