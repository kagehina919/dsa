{
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
struct Node* addTwoLists(struct Node* first, struct Node* second);
void push(struct Node** head_ref, int new_data) {
    struct Node* new_Node = new Node(new_data);
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}
void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("
");
}
void freeList(struct Node* Node) {
    struct Node* temp;
    while (Node != NULL) {
        temp = Node;
        Node = Node->next;
        free(temp);
    }
}
int main(void) {
    int t, n, m, i, x;
    cin >> t;
    while (t--) {
        struct Node* res = NULL;
        struct Node* first = NULL;
        struct Node* second = NULL;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> x;
            push(&first, x);
        }
        cin >> m;
        for (i = 0; i < m; i++) {
            cin >> x;
            push(&second, x);
        }
        res = addTwoLists(first, second);
        printList(res);
        if (first) freeList(first);
        if (second) freeList(second);
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
// write a function returns the resultant linked list
#include <bits/stdc++.h>
Node* addTwoLists(Node* first, Node* second) {
    Node* result;
    vector<int> a;
    vector<int> b;
    int count = 0;
    int cnt = 0;
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    while(first != NULL) {
        a.push_back(first->data);
        first = first->next;
        count += 1;
    }
    while(second != NULL) {
        b.push_back(second->data);
        second = second->next;
        cnt += 1;
    }
    for(int i=0;i<count;i++) {
        sum1 += a[i]*pow(10, i);
    }
    for(int i=0;i<cnt;i++) {
        sum2 += b[i]*pow(10, i);
    }
    sum = sum1 + sum2;
    result -> data = sum;
    return result;
}