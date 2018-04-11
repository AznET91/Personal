#include <stdio.h>
#include <stdlib.h>

typedef struct node {
        int val;
        struct node *next;
}lnode;

void doublePtrVal(int *);
void populateLL(lnode *, int);

int main () {
        int *a = malloc(sizeof(int));
        *a = 5;
        int b = 5;

        printf("%d\n", *a);
        doublePtrVal(a);
        printf("%d\n", *a);

        printf("%d\n", b);
        doublePtrVal(&b);
        printf("%d\n", b);

        lnode *head = NULL;
        head = malloc (sizeof(struct node));
        populateLL (head, 10);
        while (head != NULL) {
                printf("%d\n", head->val);
                head = head->next;
        }

        printf("End Program\n");
	return 0;
}

void doublePtrVal(int* refA) {
        *refA += *refA;
}

void populateLL(lnode *current, int length) {
        if (length == 1) {
                current->val = 10 - length;
                current->next = NULL;
                return;
        } 
        else if (length > 0) {
		current->val = 10 - length;
                current->next = malloc(sizeof(lnode));
                current = current->next;
		return populateLL(current, --length);
	}
}
