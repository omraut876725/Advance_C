#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("file.txt", "r");
     FILE *fptr=fopen("file_copy","w");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    if (fptr== NULL)
    {
        printf("File not found\n");
        return 1;
    }

    int ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        fprintf(fptr,"%c",ch);
    }

    fclose(fp);
  fclose(fptr);
    return 0;
}
