/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return head;
        Node* original = head;
        Node* clone = NULL;
        Node* temp = NULL;
        while(original){
            temp = new Node(original->val);
            temp->next = original->next;
            original->next=temp;
            original = temp->next;
        }
        original = head;
        Node* newHead = head->next;
        while(original){
            if(original->random){
                original->next->random = original->random->next;
            }else{
                original->next->random = NULL;
            }
            original = original->next->next;
        }
        original = head;
        while(original){
            temp = original->next;
            original->next = temp->next;
            original = original->next;
            if(original){
                temp->next = original->next;
            }else{
                temp->next = NULL;
            }
        }
        return newHead;
    }
};