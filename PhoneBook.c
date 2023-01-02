#include <stdio.h>
#include <stdlib.h>

struct phoneBook
{
    char name[25];
    long long int contact;
};

void input();
void display();

struct phoneBook contArr[40];

void main()
{
    int choice;
    printf("\n\n    WELCOME TO PHONE BOOK   \n\n");
    while (choice != 3)
    {
        printf("\n>Press 1 to store contact details\n>Press 2 to display\n>Press 3 to close Phone Book\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            input();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("\nHope you enjoyed\nThank you to use Phone Book\n\n");
            exit(0);
        default:
            printf("\n\nPlease choice in between 1 or 2 or 3\n\n");
        }
    }
}

void input()
{

    int i, n, ch;
    printf("Enter the number of contacts you want to save: ");
    scanf("%d", &n);

    if (n > 40)
    {
        printf("\n\nPhone book can contain details of 40 persons!\n\n");
        printf("Please choose in between 40\nEnter 0 to start\n");
        scanf("%d", &ch);
        if (ch == 0)
            printf("    Options: \n\n");
        else
        {

            printf("invalid choice!\n");
            printf("\nPhone Book is closing\n\n");
            exit(0);
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("\nEnter name: ");
            scanf("%s", contArr[i].name);
            printf("\nEnter ph no.: ");
            scanf("%lld", &contArr[i].contact);
        }
    }
}

void display()
{
    int i, n;
    printf("\n\nHow many contact details you want to see: \n");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("\nOk, Closing Phone book\n\n");
        exit(0);
    }
    else if (n <= 40)
    {
        for (i = 0; i < n; i++)
        {
            printf("\n%s: ", contArr[i].name);
            printf("%lld\n",contArr[i].contact);
        }
    }
}
