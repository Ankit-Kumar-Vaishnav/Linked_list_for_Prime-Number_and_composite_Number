#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

int Primestatus(int value);
void DISPLAY(struct node * head);

struct node *curp, *headp = NULL, *prep = NULL;
struct node *curc, *headc = NULL, *prec = NULL;

int main()
{
    int value, option = 0, optiond;
    int prs;
    do
    {
        printf("\n * * * * * Prime Number Operations * * * * * \n");
        printf("=========================================");
        printf("\n 1. Insertion \n 2. DISPLAY \n 3. EXIT");
        printf("\n Select Option (1/2/3) ::: ");
        fflush(stdin);
        scanf("%d", &option);
        printf("\n OPTION = %d", option);
        switch (option)
        {
        case 1:
            printf("\n Enter Item Value to be insert :");
            fflush(stdin);
            scanf("%d", &value);
            printf("\n VALUE = %d", value);
            if (value < 2)
            {
                printf("Please Enter Valid Value");
            }
            else
            {
                prs = Primestatus(value);
                printf("%d", prs);
                if (prs == 0)
                {
                    curp = (struct node *)malloc(sizeof(struct node));
                    curp->info = value;
                    curp->next = NULL;
                    if (headp == NULL)
                    {
                        headp = curp;
                    }
                    else
                    {
                        prep->next = curp;
                    }
                    prep = curp;
                }
                else if (prs == 1)
                {
                    curc = (struct node *)malloc(sizeof(struct node));
                    curc->info = value;
                    curc->next = NULL;
                    if (headc == NULL)
                    {
                        headc = curc;
                    }
                    else
                    {
                        prec->next = curc;
                    }
                    prec = curc;
                }
            }
            break;
        case 2:
            printf("\nWhich linked list you wanna print\n 1. Prime\n 2. Composite\n");
            printf("Value ::: ");
            scanf("%d", &optiond);
            if (optiond == 1)
            {
                DISPLAY(headp);
            }
            else if (optiond == 2)
            {
                DISPLAY(headc);
            }
            else
            {
                printf("Please Enter a valid input");
            }
            break;
        case 3:
            printf("\n Thank you, Bye-Bye");
            break;
        }

    } while (option <= 2);
    printf("\n Exit from Main");
    return 0;
}
int Primestatus(int value)
{
    int m, i, flag = 0;
    m = value / 2;
    for (i = 2; i <= m; i++)
    {
        if (value % i == 0)
        {
            // printf("Number is not prime");
            flag = 1;
            return flag;
            break;
        }
    }
    if (flag == 0)
    {
        // printf("Number is prime");
        return flag;
    }
}
void DISPLAY(struct node * head)
{
    struct node *ptr1;
    printf("\nElement\n");
    for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
    {
        printf("%d\n", ptr1->info);
    }
}