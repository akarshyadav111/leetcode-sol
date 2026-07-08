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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;
        int count{};
        while(count < k && fast != NULL){
            count++;
            if(count == k) break;
            fast = fast->next;
        }
        ListNode* store = fast;
        while(fast != NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        swap(store->val, slow->val);
        return head;
    }
};