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
    int getDecimalValue(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* n = curr->next;
            curr->next = newHead;
            newHead = curr;
            curr = n;
        }
        curr = newHead;
        int check = 0;
        int total = 0;
        while(curr){
            total += (curr->val*pow(2,check));
            curr = curr->next;
            check++;
        }
        return total;
    }
};