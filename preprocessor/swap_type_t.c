#include<stdio.h>
#define SWAP(num1,num2) \
  {                    \
      int tem=num1;  \
      num1=num2; \
     num2=tem;  \
  }            
  
  
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    SWAP(num1,num2);
    printf("After swapping :\n");
    printf("num1 is %d\n",num1);
    printf("num2 is %d",num2);
}
