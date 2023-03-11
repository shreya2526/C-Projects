#include <stdio.h>

void read()
{
    FILE *fp;

    fp = fopen("D:/VS code/project/c/FIT.txt", "r");
    char str[30];

    if (fp == NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File opened in read mode\n");
        while (!feof(fp))
        {

            fgets(str, 21, fp);
            printf("%s", str);
        }
    }
}

void write()
{
    FILE *fp = NULL;
    int i = 5;
    while (i)
    {
        fp = fopen("D:/VS code/project/c/FIT.txt", "w");
        fputs("Welcome to my home", fp);
        i--;
    }

    fclose(fp);
}

void main()
{
    write();
    read();
}