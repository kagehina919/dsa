/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    int tmp;
    ListNode* head = A;
    while(A != NULL && A->next != NULL) {
        tmp = A->val;
        A->val = A->next->val;
        A->next->val = tmp;
        A = A->next->next;
    }
    return head;
}