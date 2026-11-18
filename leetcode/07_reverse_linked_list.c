#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while (curr != NULL) {
        struct ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

int main() {
    struct ListNode n3 = {3, NULL};
    struct ListNode n2 = {2, &n3};
    struct ListNode n1 = {1, &n2};
    struct ListNode* rev = reverseList(&n1);
    while (rev != NULL) {
        printf("%d ", rev->val);
        rev = rev->next;
    }
    printf("\n");
    return 0;
}
