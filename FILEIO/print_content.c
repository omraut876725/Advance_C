#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    int ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
