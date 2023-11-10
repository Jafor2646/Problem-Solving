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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        ListNode* newHead = NULL;
        while(temp != NULL){
            ListNode* n = temp->next;
            temp->next = newHead;
            newHead = temp;
            temp = n;
        }
        return newHead;
    }
};