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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = temp;
        bool flag = true;
        while(temp != NULL){
            if(temp->val == val){
                if(temp == head) head = head->next;
                else if(temp->next == NULL) prev->next = NULL;
                else prev->next = temp->next;
                flag = false;
            }
            if(flag){
                prev = temp;
            }else{
                flag = true;
            }
            temp = temp->next;
        }
        return head;
    }
};