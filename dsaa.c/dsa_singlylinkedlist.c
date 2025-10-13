#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = 0;

struct node *createNode()
{
    struct node *h1;
    h1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &h1->data);
    h1->next = 0;
    return h1;
}

void insertStart()
{
    struct node *k1;
    k1 = createNode();
    if (start == 0)
    {
        start = k1;
    }
    else
    {
        k1->next = start;
        start = k1;
    }
}

void insertEnd()
{
    struct node *j1, *g1;
    j1 = createNode();
    if (start == 0)
    {
        start = j1;
    }
    else
    {
        g1 = start;
        while (g1->next != 0)
        {
            g1 = g1->next;
        }
        g1->next = j1;
    }
}

void insertMiddle()
{
    struct node *h1, *j, *f;
    h1 = createNode();
    if (start == 0)
    {
        start = h1;
    }
    else
    {
        int d;
        printf("Enter data after which you want to insert: ");
        scanf("%d", &d);
        f = start;
        while (f != NULL && f->data != d)
        {
            f = f->next;
        }
        if (f == NULL)
        {
            printf("Data not found.\n");
            free(h1);
            return;
        }
        j = f->next;
        f->next = h1;
        h1->next = j;
    }
}

void deleteStart()
{
    struct node *yl;
    if (start == 0)
    {
        printf("There is no node to delete.\n");
    }
    else
    {
        yl = start;
        start = start->next;
        free(yl);
    }
}

void deleteEnd()
{
    struct node *h1, *a1;
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
        h1 = start;
        while (h1->next->next != 0)
        {
            h1 = h1->next;
        }
        a1 = h1->next;
        h1->next = 0;
        free(a1);
    }
}

void deleteMiddle()
{
    struct node *g, *h, *p;
    if (start == 0)
    {
        printf("There is no node to delete.\n");
    }
    else
    {
        int d;
        g = start;
        printf("Enter the data that you want to delete: ");
        scanf("%d", &d);
        if (start->data == d)
        {
            deleteStart();
            return;
        }
        while (g->next != NULL && g->next->data != d)
        {
            g = g->next;
        }
        if (g->next == NULL)
        {
            printf("Data not found.\n");
            return;
        }
        h = g->next;
        p = g->next->next;
        g->next = p;
        free(h);
    }
}

void display()
{
    struct node *j1;
    j1 = start;
    if (j1 == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    printf("Linked list: ");
    while (j1 != 0)
    {
        printf("%d ", j1->data);
        j1 = j1->next;
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
