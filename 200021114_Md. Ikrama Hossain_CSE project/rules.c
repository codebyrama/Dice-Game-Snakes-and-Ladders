#include<stdio.h>
#include<stdlib.h>
char rules(void)
{
    FILE *file;
    char ch;
    file = fopen("rules.txt", "r");
    if (file == NULL)
    {
        printf("Create some rules at first \n");
    }
    else
    {
        while (!feof (file))
        {
            ch = fgetc(file);
            printf ("%c", ch);
        }
        fclose(file);
    }
}
