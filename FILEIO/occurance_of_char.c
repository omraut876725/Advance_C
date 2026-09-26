/* print occurance of given character in file*/
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
   char ch1;
  printf("Enter the character\n");
  scanf("%c",&ch1);
    while ((ch = fgetc(fp)) != EOF)
    {
        if(ch==ch1)
        {
          printf("%ld",ftell(fp)-1);
        }
    }

    fclose(fp);
    return 0;
}
