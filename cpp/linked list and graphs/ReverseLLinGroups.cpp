/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    int count = 0;
    ListNode* curr = A;
    ListNode* prev = NULL;
    ListNode* next = NULL;
    while(curr != NULL && count<k) {
        count++;
        next = curr->next;
        curr->next = prev;
        curr = next;
        prev = curr;
    }
    if(next != NULL) A->next = reverseList(next, B);
    return prev;
}