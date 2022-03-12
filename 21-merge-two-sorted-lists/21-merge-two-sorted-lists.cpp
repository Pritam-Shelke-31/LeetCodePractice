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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
	//Checking if list 1 is empty if it is then we are returning the list 2
         if (list1==NULL)
        {
            return list2;
        }
		//Checking if list 2 is empty if it is then we are returning the list 1
        if (list2==NULL)
        {
            return list1;
        }
		//If upper two conditions are false then we are performing this using recursion
		//In this block we are checking the value of list 1 in which are doing the same sorting stuff thing
		//and in the end after performing the sorting using recursion we are simply returing the list 1
        if (list1->val<list2->val){
            list1->next = mergeTwoLists(list1->next,list2);
            return list1;
        }
		//The same above explanation goes for it too 
		//Just the minor difference is that we are returning the list 2 because after the check of list 1 and list 2 value
        else{
             list2->next = mergeTwoLists(list1,list2->next);
             return list2;
        }
    }
};