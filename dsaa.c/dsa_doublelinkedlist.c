#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *start = 0;

struct node *createNode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &n->data);
    n->prev = 0;
    n->next = 0;
    return n;
}

void insertStart()
{
    struct node *n;
    n = createNode();
    if (start == 0)
    {
        start = n;
    }
    else
    {
        n->next = start;
        start->prev = n;
        start = n;
    }
}

void insertEnd()
{
    struct node *n, *t;
    n = createNode();
    if (start == 0)
    {
        start = n;
    }
    else
    {
        t = start;
        while (t->next != 0)
        {
            t = t->next;
        }
        t->next = n;
        n->prev = t;
    }
}

void insertMiddle()
{
    struct node *n, *t;
    n = createNode();
    if (start == 0)
    {
        start = n;
    }
    else
    {
        int d;
        printf("Enter data after which you want to insert: ");
        scanf("%d", &d);
        t = start;
        while (t != 0 && t->data != d)
        {
            t = t->next;
        }
        if (t == 0)
        {
            printf("Data not found.\n");
            free(n);
            return;
        }
        n->next = t->next;
        n->prev = t;
        if (t->next != 0)
        {
            t->next->prev = n;
        }
        t->next = n;
    }
}

void deleteStart()
{
    struct node *t;
    if (start == 0)
    {
        printf("There is no node to delete.\n");
    }
    else
    {
        t = start;
        start = start->next;
        if (start != 0)
        {
            start->prev = 0;
        }
        free(t);
    }
}

void deleteEnd()
{
    struct node *t;
    if (start == 0)
    {
        printf("There is no node to delete.\n");
    }
    else if (start->next == 0)
    {
        free(start);
        start = 0;
    }
    else
    {
        t = start;
        while (t->next != 0)
        {
            t = t->next;
        }
        t->prev->next = 0;
        free(t);
    }
}

void deleteMiddle()
{
    struct node *t;
    if (start == 0)
    {
        printf("There is no node to delete.\n");
    }
    else
    {
        int d;
        printf("Enter the data that you want to delete: ");
        scanf("%d", &d);
        t = start;
        if (t->data == d)
        {
            deleteStart();
            return;
        }
        while (t != 0 && t->data != d)
        {
            t = t->next;
        }
        if (t == 0)
        {
            printf("Data not found.\n");
            return;
        }
        if (t->next != 0)
        {
            t->next->prev = t->prev;
        }
        if (t->prev != 0)
        {
            t->prev->next = t->next;
        }
        free(t);
    }
}

void display()
{
    struct node *t;
    t = start;
    if (t == 0)
    {
        printf("List is empty.\n");
        return;
    }
    printf("Doubly linked list: ");
    while (t != 0)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int main()
{
    int ch;
    printf("\n1. Insertion from start");
    printf("\n2. Insertion from end");
    printf("\n3. Insertion from middle");
    printf("\n4. Deletion from start");
    printf("\n5. Deletion from end");
    printf("\n6. Deletion from middle");
    printf("\n7. Display");
    printf("\n8. Exit");

    while (1)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertStart();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            insertMiddle();
            break;
        case 4:
            deleteStart();
            break;
        case 5:
            deleteEnd();
            break;
        case 6:
            deleteMiddle();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }
}
