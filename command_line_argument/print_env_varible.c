#include<stdio.h>
int main(int argc,char*argv[],char *envp[])
{
 int flag=0;
  char *var;
  char *val;
  while(envp[i]!=NULL)
    {
      var=strtok(envp[i],"=")
     if(strcmp(argv[1],var)==0)
      {
        val=strtok(NULL,"=")
          {
          printf("%s\n",val);
          flag++;
        }
      }
      i++;
    }
  if(flag==0)
  {
    printf("varible not found");
  }
  return 0;
  
        
       
    }
          
  
}
