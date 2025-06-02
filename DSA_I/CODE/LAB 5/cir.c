#include<stdio.h>
#include<stdlib.h>

struct link
{
    int data;
    struct link *next;
};

void display(struct link *h)
{
    if (h == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct link *q = h;
    do
    {
        printf("Self Address-%p   Data-%d   Next Address-%p\n", q, q->data, q->next);
        q = q->next;
    } while (q != h);

    printf(">>Thank You!<<\n\n");
}

int main()
{
    struct link *h = NULL, *p = NULL, *q = NULL;
    int n;
    printf("How many nodes?\n");
    scanf("%d", &n);
    printf("Enter data-\n");

    // Create the circular linked list
    while (n--)
    {
        p = (struct link*)malloc(sizeof(struct link));
        scanf("%d", &p->data);
        if (h == NULL)
        {
            h = p;
            q = p;
        }
        else
        {
            q->next = p;
            q = p;
        }
    }
    q->next = h;

    char m;
    int temp;
    do
    {
        printf("\nWhat operation do you want to do?\n");
        printf("a) Insert front.\n");
        printf("b) Insert middle.\n");
        printf("c) Insert last.\n");
        printf("d) Delete front.\n");
        printf("e) Delete middle.\n");
        printf("f) Delete last.\n");
        printf("g) Display.\n");
        printf("h) Exit.\n");

        scanf(" %c", &m);

        switch (m)
        {
            case 'a':
                p = (struct link*)malloc(sizeof(struct link));
                printf("Enter data-\n");
                scanf("%d", &p->data);
                p->next = h;
                h = p;
                q->next=h;
                break;

            case 'b':
                p = (struct link*)malloc(sizeof(struct link));
                printf("After which data do you want to insert?\n");
                scanf("%d", &temp);
                q = h;
                while (q->data != temp)
                    q = q->next;
                printf("Enter data-\n");
                scanf("%d", &p->data);
                p->next = q->next;
                q->next = p;
                break;

            case 'c':
                p = (struct link*)malloc(sizeof(struct link));
                printf("Enter data-\n");
                scanf("%d", &p->data);
                p->next = h;
                q->next = p;
                q = p;
                break;

            case 'd':
                if (h != NULL)
                {
                    q = h;
                    while (q->next != h)
                        q = q->next;
                    if (h == q)
                    {
                        free(h);
                        h = NULL;
                    }
                    else
                    {
                        q->next = h->next;
                        free(h);
                        h = q->next;
                    }
                }
                else
                {
                    printf("List is empty.\n");
                }
                break;

            case 'e':
                if (h != NULL)
                {
                    printf("Which data do you want to delete?\n");
                    scanf("%d", &temp);
                    q = h;
                    do
                    {
                        p = q;
                        q = q->next;
                    } while (q != h && q->data != temp);

                    if (q != h)
                    {
                        p->next = q->next;
                        free(q);
                    }
                    else
                    {
                        printf("Data not found.\n");
                    }
                }
                else
                {
                    printf("List is empty.\n");
                }
                break;

            case 'f':
                if (h != NULL)
                {
                    q = h;
                    p = q->next;
                    while (p != h)
                    {
                        if (p->next == h)
                        {
                            q->next = h;
                            free(p);
                            break;
                        }
                        else
                        {
                            q = p;
                            p = p->next;
                        }
                    }
                }
                else
                {
                    printf("List is empty.\n");
                }
                break;

            case 'g':
                display(h);
                break;

            case 'h':
                printf(">>Thank You!<<\n\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (m != 'h');

    return 0;
}
