#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/**
 * @brief Structure for the linked list. The next variable will be contained the
 * address to the next linked list, and for the end, the next var must be NULL.
 * 
 */
struct node
{
    int value;
    struct node *next;
};

static void free_node(struct node *self)
{
    if (self)
        free(self);
}

static struct node *init_node(struct node *self)
{
    if (!self)
        self = malloc(sizeof(struct node));

    assert(self);

    return self;
}

static struct node *add_value(struct node *self, int value)
{
    self->value = value;
    return self;
}

static unsigned count_nodes(struct node *self)
{
    unsigned i;

    for (i = 0; self; i++)
    {
        self = self->next;
    }

    return i;
}
int main(int argc, char const *argv[])
{
    struct node *head = NULL;
    head = init_node(head);

    struct node *nodeA = NULL;
    nodeA = init_node(nodeA);

    struct node *nodeB = NULL;
    nodeB = init_node(nodeB);

    struct node *nodeC = NULL;
    nodeC = init_node(nodeC);

    head->value = 5;
    head->next = nodeA;

    nodeA->value = head->value * 2;
    nodeA->next = nodeB;

    nodeB->value = nodeA->value * 3;
    nodeB->next = nodeC;

    nodeC->value = nodeB->value * 4;
    nodeC->next = NULL;

    printf("%d\n%d\n%d\n%d\n"
           "Total: %u.\n",
           head->value, nodeA->value, nodeB->value, nodeC->value,
           count_nodes(head));

    free_node(head);
    free_node(nodeA);
    free_node(nodeB);
    free_node(nodeC);
    return 0;
}
