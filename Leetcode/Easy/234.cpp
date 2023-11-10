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
    bool isPalindrome(ListNode* head) {
        ListNode* curr = head;
        ListNode* newHead = new ListNode(head->val);
        curr = curr->next;
        while(curr){
            ListNode* n = new ListNode(curr->val, newHead);
            newHead = n;
            curr = curr->next;
        }
        ListNode* curr1 = head;
        ListNode* curr2 = newHead;
        while(curr1 && curr2){
            if(curr1->val != curr2->val) return false;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return true;
    }
};