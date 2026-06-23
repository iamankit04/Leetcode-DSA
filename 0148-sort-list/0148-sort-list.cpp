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
    ListNode* sortList(ListNode* head) {

        vector<int> nums; 

        while(head != NULL){
            nums.push_back(head -> val); 
            head = head -> next ; 
        }

        sort(begin(nums) , end(nums));

        ListNode* ans = new ListNode(0);
        ListNode* temp = ans ; 

        int n = nums.size();
         
        for(int i = 0 ; i < n; i++){
            temp -> next = new ListNode(nums[i]);
            temp = temp -> next ; 
        }
        return ans -> next ; 
    }
};