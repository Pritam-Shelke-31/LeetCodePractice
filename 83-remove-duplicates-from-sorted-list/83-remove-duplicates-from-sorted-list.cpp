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
   ListNode* deleteDuplicates(ListNode* head) {
        set<int> s;
        if(head == NULL || head->next == NULL)
            return head;
        s.insert(head->val);
        ListNode* curr = head;
        while(curr != NULL && curr->next != NULL){
            if(!s.count(curr->next->val)){
                curr = curr->next;
                s.insert(curr->val);
            }
            else {
                curr->next = curr->next->next;
            }
        }
        return head;
    }
};