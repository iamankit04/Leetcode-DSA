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
    vector<int> nextLargerNodes(ListNode* head) {

        vector<int> ans ; 
        ListNode* temp = head ; 
        int n = 0 ; 

        while(temp != NULL){
            ans.push_back(temp -> val);
            n++;
            temp = temp -> next ; 
        }

        vector<int> res(n, 0) ; 

        // int n = ans.size(); 

        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                if(ans[i] < ans[j]){
                    res[i] = ans[j];
                    break ; 
                }
            }
        }

        // ListNode* t1 = new ListNode(res[0]);
        // ListNode* curr = t1 ; 

        // for(int i = 1 ; i < n ; i++){
        //     t1 -> next = new ListNode(res[i]);
        //     t1 = t1 -> next ; 
        // }
        // return curr ; 
        return res; 
    }
};