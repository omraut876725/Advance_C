#include<stdio.h>
int main()
{
  int a=10;
for(int i=31;i<=0;i++)
{
  printf("%d",(unsigned)(a>>i)&1);
}
}
