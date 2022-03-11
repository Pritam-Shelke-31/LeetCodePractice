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
    ListNode* mergeNodes(ListNode* head) {
     if(head->val==0){head=head->next;}
    
        ListNode* ptr=head;
        ListNode* temp=head;
        int sum=0;

        while(temp){
            if(temp->val!=0){
                sum+=temp->val;
                temp=temp->next;
            } 
            else{
                ptr->val=sum;
                ptr->next = temp->next;
                temp = temp->next;
                ptr = temp;
                sum = 0;
            }

        }
        return head;   
    }
};