#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main()
{
    node *list = NULL;
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n->number = 10;
    n->next = NULL;
    list = n;

    n = malloc(sizeof(node));
        if (n == NULL)
    {
        return 1;
    }
    n->number = 20;
    n->next = NULL;
    list->next = n;

    printf("first node: %i\n", list->number);
    printf("second node: %i\n", list->next->number);

    free(list);
    free(n);

    // int a = 10;
    // int b = 5;
    // int adding = add(&a, &b);
    // int subtracting = sub(&a, &b);
    // printf("sum = %i, sub = %i\n", adding, subtracting);

    return 0;
}

int add(int *a, int *b)
{
    int sum = *a + *b;
    return sum;
}

int sub(int *a, int *b)
{
    int sub = *a - *b;
    return sub;
}