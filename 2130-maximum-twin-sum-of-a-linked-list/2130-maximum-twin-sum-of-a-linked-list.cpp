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

        vector<int> arr ; 

        int sum = 0 , maxs = INT_MIN ; 

        ListNode* temp = head ; 

        while(temp != NULL){
            arr.push_back(temp -> val); 
            temp = temp -> next ; 
        }

        int i = 0 ; 
        int j = arr.size()  - 1 ; 

        while(i < j){
            int sum = arr[i++] + arr[j--];
            maxs = max(sum , maxs);
        }
        return maxs ; 
    }
};