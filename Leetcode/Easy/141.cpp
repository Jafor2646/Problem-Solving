#include <iostream>
#include <string>
#include<vector>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL) return false;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL){
            fast = fast->next;
            slow = slow->next;
            if(fast != NULL) fast = fast->next;
            if(fast == slow) return true;
        }
        return false;   
    }
};