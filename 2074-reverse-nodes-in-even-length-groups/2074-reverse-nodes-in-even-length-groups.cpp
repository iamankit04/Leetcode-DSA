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
    ListNode* reverseEvenLengthGroups(ListNode* head) {

        vector<int> ans; 
        ListNode* temp = head ; 

        while(temp != NULL){
            ans.push_back(temp -> val);
            temp = temp -> next ; 
        }

        int g = 1; 

        int n = ans.size(); 

        int i = 0 ; 

        while(i < n){

            int l = min(g , n - i);

            if(l % 2 == 0){
                reverse(ans.begin() + i , ans.begin() + i + l);
                
            }

            i += l;
            g++;
        }

        // reverse(ans.begin() + i , ans.end()); 

        ListNode* res = new ListNode(ans[0]);
        ListNode* curr = res ; 
        
        for(int i = 1 ; i < n ; i++ ){
            curr -> next = new ListNode(ans[i]);
            curr = curr -> next ; 
        }
        return res ; 
    }
};