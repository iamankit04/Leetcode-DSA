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
    ListNode* removeElements(ListNode* head, int val) {

        vector<int> arr; 

        ListNode* temp = head ; 

        while(temp != NULL){
            
            if(temp -> val != val){
                arr.push_back(temp -> val);
            }

            temp = temp -> next ; 
        }

        int n = arr.size();

        if(arr.empty()) return NULL;

        ListNode* ans = new ListNode(arr[0]); 
        ListNode* res = ans;

        for(int i = 1 ; i < n ; i++){

            ans -> next = new ListNode(arr[i]);
            ans = ans -> next ; 
        }
        return res; 
    }
};