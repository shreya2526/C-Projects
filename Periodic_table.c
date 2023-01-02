#include <stdio.h>
#include<stdlib.h>

void table();

void main()
{
    int start, close;
    printf("\n\n\n   PERIODIC TABLE WITH FACTS   \n\n\n");
    printf("\n>Press 1 to start\n\n>Press 0 to exit\n\n");
    printf("Enter choice: ");
    scanf("%d", &start);
    if (start == 1)
    {
        printf("\n\n\n    Welcome to MORDERN PERIODIC TABLE with INTERESTING FACTS    \n\n\n");
        table();
    }
    else if(start==0)
    {
        printf("\nDo you want to close Periodic Table?\n\n");
        printf("\nEnter 2 for YES or 3 for NO\n\n");
        scanf("%d", &close);
        if (close == 2)
        {
            printf("\n\nThank you, Hope you enjoyed to learn about atmos from periodic table\n\n");
        }
        else
        {
            table();
        }
    }
    else{
        printf("\n\nInvalid Choice\n\n");
    }
}

void table()
{
    int ele;
    printf("\nRULE: 1- Please Choose between 1 to 4 to learn from the table\n");
    printf("RULE: 2- Enter 0 to exit\n");
    while (1)
    {
        printf("\n>Enter atomic number to know about estemed element: \n\n");
        scanf("%d", &ele);
        switch (ele)
        {
        case 1:
            printf("\nElement name: HYDROGEN\nSymbol: H\nAtomic number: 1\nElectronic configuration: 1s^1\nDiscovered by: Henry Cavendish\nCharge: +1\n\n");
            break;
        case 2:
            printf("\nElement name: HELIUM\nSymbol: HeAtomic number: 2\nElectronic configuration: 1s^2\nDiscovered by: Pierre Janssen\nCharge: NO CHARGE(Oxidation no: 0)\n\n");
            break;
        case 3:
            printf("\nElement name: LITHIUM\nSymbol: Li\nElectronic configuration: 1s^2 2s^1\nDiscovered by: Dr. John Goodenough\nCharge: +1\n\n");
            break;
        case 4:
            printf("\nElement name: BERYLLIUM\nSymbol: C\nElectronic Configuration: 1s^2 2s^2\nDiscovered by: Nicolas-Louis Vauquelin\nCharge: +2\n\n");
            break;
        case 0:
            exit(0);
        default:
            printf("\nInvalid choice\n");
        }
    }
}