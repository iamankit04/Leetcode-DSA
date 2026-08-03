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

        set<int> st ; 

        ListNode* temp = head ; 

        unordered_set<int> vis ; 

        while(temp != NULL){

            if(!st.count(temp -> val)){
                if(!vis.count(temp -> val)){
                st.insert(temp -> val);
                }
                vis.insert(temp -> val);
            }else if (st.count(temp -> val)){
                st.erase(temp -> val);
            }

            temp = temp -> next ; 
        }
        ListNode* ans = new ListNode(-1);
        ListNode* res = ans ; 
        
        for(auto &it : st){
            ans-> next = new ListNode(it); 
            ans = ans -> next ; 
        }

        return res -> next; 
    }
};