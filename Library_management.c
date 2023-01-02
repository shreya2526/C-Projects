#include <stdio.h>
#include <stdlib.h>
int cd1, cm1, cy1;
int cd2, cm2, cy2;
int cd3, cm3, cy3;
int Rd1, Rm1, Ry1;
int Rd2, Rm2, Ry2;
int Rd3, Rm3, Ry3;
int pd1, pm1, py1;
int pd2, pm2, py2;
int pd3, pm3, py3;
int CPd1, CPm1, CPy1;
int CPd2, CPm2, CPy2;
int CPd3, CPm3, CPy3;
int CAd1, CAm1, CAy1;
int CAd2, CAm2, CAy2;
int CAd3, CAm3, CAy3;
int cyd1, cym1, cyy1;
int cyd2, cym2, cyy2;
int cyd3, cym3, cyy3;
void date(int, int, int);
void python()
{

    int bookName;
    int choice;

    while (choice != 4)
    {
        printf("\n\n    :PYTHON books in Library:     \n\n");
        printf("1. Core Python Programming\n2.Introduction to Python\n3.Python in Depth\n>press 4 to exit\n\n");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nCore Python Programming\nBEGINNER FRIENDLY!\n\n");
            printf("Enter the date of issue: \n");
            scanf("%d %d %d", &pd1, &pm1, &py1);
            printf("\n %d %d %d", pd1, pm1, py1);
            date(pd1, pm1, py1);
            break;
        case 2:
            printf("\nIntroduction To Python\n\n");
            printf("Enter the date of issue: \n");
            scanf("%d %d %d", &pd2, &pm2, &py2);
            printf("\n %d %d %d", pd2, pm2, py2);
            date(pd2, pm2, py2);
            break;
        case 3:
            printf("Python in Depth\n");
            printf("Enter the date of issue: \n");
            scanf("%d %d %d", &pd3, &pm3, &py3);
            printf("\n %d %d %d", pd3, pm3, py3);
            date(pd3, pm3, py3);
            break;
        case 4:
            printf("\nTHANK YOU to issue books from Library!!\n");
            break;
        default:
            printf("\nThis book is not available. Please choose from the given list\n\n");
            break;
        }
    }
}

void RLanguage()
{
    int choice;
    while (choice != 4)
    {
        printf("\n\n\t     :R Books in Library:          \n");
        printf("\n1.R in Depth\n2.Introduction to R\n3.R for Beginers\n\n3>press 4 to exit\n");
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nR in Depth");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &Rd1, &Rm1, &Ry1);
            printf("%d/%d/%d", Rd1, Rm1, Ry1);
            date(Rd1, Rm1, Ry1);
            break;

        case 2:
            printf("\nIntroduction to R");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &Rd2, &Rm2, &Ry2);
            printf("%d/%d/%d", Rd2, Rm2, Ry2);
            date(Rd2, Rm2, Ry2);
            break;

        case 3:
            printf("\nR for Beginers");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &Rd3, &Rm3, &Ry3);
            printf("%d/%d/%d", Rd3, Rm3, Ry3);
            date(Rd3, Rm3, Ry3);
            break;
        case 4:
            printf("\nThank you for issue book from Library");
            break;
        default:
            printf("\nInvalid Choice");
        }
    }
}

void cLanguage()
{
    int choice;
    while (choice != 4)
    {
        printf("\n\n\t     :C Books in Library:          \n");
        printf("\n1.C in Depth\n2.Introduction to C\n3.C for Beginers\n>press 4 if u do not take any book");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nC in Depth");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &cd1, &cm1, &cy1);
            printf("%d/%d/%d", cd1, cm1, cy1);
            date(cd1, cm1, cy1);
            break;

        case 2:
            printf("\nIntroduction to C");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &cd2, &cm2, &cy2);
            printf("%d/%d/%d", cd2, cm2, cy2);
            date(cd2, cm2, cy2);
            break;

        case 3:
            printf("\nC for Beginers");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &cd3, &cm3, &cy3);
            printf("%d/%d/%d", cd3, cm3, cy3);
            date(cd3, cm3, cy3);
            break;
        case 4:
            printf("\nThank you for issue book from Library");
            break;
        default:
            printf("\nInvalid Choice");
        }
    }
}

void cPlus()
{
    int choice;
    while (choice != 4)
    {
        printf("\n\n\t     :C++ Books in Library:          \n");
        printf("\n1.C++ in Depth\n2.Introduction to C++\n3.C++ for Beginers\n>press 4 if u do not take any book");
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nC++ in Depth");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &CPd1, &CPm1, &CPy1);
            printf("%d/%d/%d", CPd1, CPm1, CPy1);
            date(CPd1, CPm1, CPy1);
            break;

        case 2:
            printf("\nIntroduction to C++");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &CPd2, &CPm2, &CPy2);
            printf("%d/%d/%d", CPd2, CPm2, CPy2);
            date(CPd2, CPm2, CPy2);
            break;

        case 3:
            printf("\nC++ for Beginers");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &CPd3, &CPm3, &CPy3);
            printf("%d/%d/%d", CPd3, CPm3, CPy3);
            date(CPd3, CPm3, CPy3);
            break;
        case 4:
            printf("\nThanku for issue book from Library");
            break;
        default:
            printf("\nInvalid Choice");
        }
    }
}

void cyber()
{

    int choice;

    while (choice != 4)
    {
        printf("\n\n    :Cyber Security books in Library:     \n\n");
        printf("1. Core Python Programming\n2.Firewall and IP\n3.Advance Cyber Security\n>press 4 if u do not take any book\n\n");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nCore Python Programming\nBEGINNER FRIENDLY!\n\n");
            printf("Enter the date of issue: \n");
            scanf("%d %d %d", &cyd1, &cym1, &cyy1);
            printf("\n %d %d %d", cyd1, cym1, cyy1);
            date(cyd1, cym1, cyy1);
            break;
        case 2:
            printf("\nFirewall and IP\n\n");
            printf("Enter the date of issue: \n");
            scanf("%d %d %d", &cyd2, &cym2, &cyy2);
            printf("\n %d %d %d", cyd2, cym2, cyy2);
            date(cyd2, cym2, cyy2);
            break;
        case 3:
            printf("Advance Cyber Security\n");
            printf("Enter the date of issue: \n");
            scanf("%d %d %d", &cyd3, &cym3, &cyy3);
            printf("\n %d %d %d", cyd3, cym3, cyy3);
            date(cyd3, cym3, cyy3);
            break;
        case 4:
            printf("\nTHANK YOU to issue book from Library\n");
            break;
        default:
            printf("\nThis book is not available. Please choose from the given list\n\n");
            break;
        }
    }
}

void calculas()
{
    int choice;
    while (choice != 3)
    {
        printf("\n\n\t     :CALCULAS Books in Library:          \n");
        printf("\n1.Intrigration\n2.Derivative\n>press 3 if u do not take any book");
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nIntrigration");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &CAd1, &CAm1, &CAy1);
            printf("%d/%d/%d", CAd1, CAm1, CAy1);
            date(CAd1, CAm1, CAy1);
            break;

        case 2:
            printf("\nDerivative");
            printf("\nEnter the date of issue:");
            scanf("%d%d%d", &CAd2, &CAm2, &CAy2);
            printf("%d/%d/%d", CAd2, CAm2, CAy2);
            date(CAd2, CAm2, CAy2);
            break;
        case 3:
            printf("\nThank you for issue book from Library");
            break;
        default:
            printf("\nInvalid Choice");
        }
    }
}

void BookIssue()
{
    int stream, book;
    printf("1.CSE-MAIN\n2.CSE-CS\n3.CSE-DS\n4.CSE-AIML\n\n");
    printf("\nWhich stream are you from: ");
    scanf("%d", &stream);
    if (stream == 1)
    {
        printf("\n\n1.C Language\n2.Python Language\n3.C++ Language\n");
        printf("\n>Press 4 to exit\n\n");
        printf("\nEnter your choice: ");
        scanf("%d", &book);
        if (book == 1)
            cLanguage();
        else if (book == 2)
            python();
        else if (book == 3)
            cPlus();
        else
            printf("\nInvalid choice\n");
    }
    else if (stream == 2)
    {
        printf("\n\n1.C Language\n2.Python Language\n3.Cyber\n");
        printf("\n>Press 4 to exit\n\n");
        printf("\nEnter your choice: ");
        scanf("%d", &book);
        if (book == 1)
            cLanguage();
        else if (book == 2)
            python();
        else if (book == 3)
            cyber();
        else
            printf("\nInvalid choice\n");
    }
    else if (stream == 3)
    {
        printf("\n\n1.C Language\n2.Python Language\n3.R Language\n");
        printf("\n>Press 4 to exit\n\n");
        printf("\nEnter your choice: ");
        scanf("%d", &book);
        if (book == 1)
            cLanguage();
        else if (book == 2)
            python();
        else if (book == 3)
            RLanguage();
        else
            printf("\nInvalid choice\n");
    }
    else if (stream == 4)
    {
        printf("\n\n1.C Language\n2.Python Language\n3.Math: Calculas\n");
        printf("\n>Press 4 to exit\n\n");
        printf("\nEnter your choice: ");
        scanf("%d", &book);
        if (book == 1)
            cLanguage();
        else if (book == 2)
            python();
        else if (book == 3)
            calculas();
        else
            printf("\nInvalid choice\n");
    }
    else
    {
        printf("\n\nInvalid choice\n");
    }
}

void date(int d, int m, int y)
{
    int r, mo, y1;
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d - 15 > 0)
        {
            r = (d + 15);
            if (r > 39)
            {
                r = (r % 10) + 10;
            }
            else
                r = (d + 15) % 10;
            mo = m + 1;
        }
        else
        {
            r = d + 15;
            mo = m;
        }
        y1 = y;
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d - 15 > 0)
        {
            r = (d + 14);
            if (r > 39)
                r = (r % 10) + 10;
            else
                r = (d + 14) % 10;
            mo = m + 1;
        }
        else
        {
            r = d + 15;
            mo = m;
        }
        y1 = y;
    }
    else
    {
        if (y % 4 == 0)
        {
            if (d - 15 > 0)
            {
                r = (d + 15);
                if (r >= 30 && r <= 39)
                {
                    r = (r % 10) + 10;
                    mo = m + 1;
                }
                else
                {
                    r = (r % 10) + 11;
                    mo = m+1;
                }
            }
        }
        else
        {
            if (d - 15 > 0)
            {
                r = (d + 15);
                if (r > 39)
                {
                    r = (r % 10) + 12;
                }
                else
                {
                    r = (r % 10) + 2;
                }
                mo = m + 1;
            }
            else
            {
                if (d >= 1 && d <= 12)
                {
                    r = (d + 15);
                    mo = m;
                }
                else
                {

                    r = (d + 16) % 10;
                    r = r + 1;
                    mo = m + 1;
                }
            }
        }
        y1 = y;
    }

    if (m == 12)
    {
        if (d - 15 > 0)
        {
            r = (d + 14);
            if(r>39){
                r=(r%10)+10;
            }
            else{
                r=r%10;
            }
            mo = 1;
            y1 = y + 1;
        }
        else
        {
            r = (d + 15);
            mo = m;
            y1 = y;
        }
    }

    printf("\n\nActual returning date: %d/%d/%d", r, mo, y1);
}

void main()
{
    int choice, stream, book;
    int choice2;
    printf("\n------------------------------------------------------\n");
    printf("\n\n                    LIBRARY                         \n\n");
    printf("\n------------------------------------------------------\n");
    while (choice != 2)
    {
        printf("\n1.BOOK ISSUE\n2.EXIT\n");
        printf("\nEnter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            BookIssue();
            break;
        case 2:
            printf("\nThank you for visiting library");
            exit(1);
        default:
            printf("Invalid Choice");
            break;
        }
    }
}