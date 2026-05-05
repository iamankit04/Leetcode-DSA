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
    int find(ListNode* head){
        int c = 0 ; 

        while(head != NULL){
            c++;
            head = head -> next; 
        }

        return c ; 
    }
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head -> next == NULL) return head ; 

        int l = find(head); 

        k = k % l ; 
        if(k == 0) return head;
        int n = l - k; 
        ListNode* home = head ; 

        for(int i = 1 ; i < n; i++){
            head = head -> next ; 
        }

        ListNode* curr = head -> next ; 
        head -> next = NULL ; 

        ListNode* temp = curr ;
        

        while(temp -> next != NULL){
            
            temp = temp -> next ; 
            
        }

        temp -> next = home ; 

        return curr ; 
        
    }
};