#include<stdio.h>
#include<stdlib.h>
void record(int no,char name[50])
{
    FILE *file2;
    file2 = fopen("record.txt", "a");
    if (file2 == NULL)
    {
        printf("Couldn't create file\n");
    }
    else
    {
        fprintf(file2,"%d. \twinner :\t%s",no,name);
        fclose(file2);
    }
}
