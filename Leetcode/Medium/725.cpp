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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr = head;
        int n = 0;
        while(curr != NULL){
            curr = curr->next;
            n++;
        }
        int width = n/k, rem = n%k;
        vector<ListNode*> ans(k);
        curr = head;
        for(int i = 0; i<k; ++i){
            ListNode* newHead = new ListNode(0);
            ListNode* write = newHead;
            for(int j =0; j<width+(i<rem?1:0); ++j){
                write = write->next= new ListNode(curr->val);
                if(curr != NULL) curr = curr->next;
            }
            ans[i] = newHead->next;
        }
        return ans;        
    }
};