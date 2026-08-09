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
    ListNode* insertionSortList(ListNode* head) {

        vector<int> nums; 

        ListNode* temp= head ; 

        while(temp){

            nums.push_back(temp -> val); 
            temp = temp -> next ; 
        }

        ListNode* ans = new ListNode(-5001);
        ListNode* res = ans ; 

        int n = nums.size(); 

        sort(begin(nums) , end(nums)); 

        for(int i = 0; i < n ; i++){
             ans-> next = new ListNode(nums[i]);
             ans = ans -> next ; 

        }
        return res -> next ; 
    }
};