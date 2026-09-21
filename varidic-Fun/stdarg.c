

#include <stdio.h>
#include<stdarg.h>
#include<stdlib.h>
int add(int count,...)
{
    va_list ap;
    va_start(ap,count);
    int sum=0;
    for(int i=0;i<count;i++)
    {
        sum=sum+va_arg(ap,int);
    }
    va_end(ap);
    return sum;
}
int main()
{
    int count=3;
    int sum=add(3,1,2,3);
printf("sum =%d",sum);
    return 0;
}
