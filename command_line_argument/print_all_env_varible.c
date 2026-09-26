#include<stdio.h>
int main(int argc,char *argv[],char *envp[])
{ int ch;
  for(int i=0;envp[i]!=NULL';i++)
{
printf("%s",envp[i]);
}
return 0;
}

