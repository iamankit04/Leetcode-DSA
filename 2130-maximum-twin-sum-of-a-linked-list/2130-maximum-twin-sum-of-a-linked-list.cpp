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
    int pairSum(ListNode* head) {

        ListNode* slow = head ; 
        ListNode* fast = head ; 

        int res =  0 ; 

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next; 
            fast = fast -> next -> next ; 
        }

        ListNode* mid = slow ; 

        ListNode* prev = NULL ; 
        ListNode* nextnode = NULL ; 

        while(mid != NULL){
            nextnode = mid -> next ; 
            mid -> next = prev  ;

            prev = mid ; 
            mid = nextnode ; 
        }

        while(prev != NULL){
            res = max(res , head -> val + prev -> val);
            head = head -> next ; 
            prev = prev -> next ; 
        }
        return res; 
    }
};