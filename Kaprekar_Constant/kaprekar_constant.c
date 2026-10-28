#include<stdio.h>
int accsending(int num)
{  int arr[4];
    for(int i=0;i<4;i++)
    {
        arr[i]=num%10;
        num=num/10;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(arr[i]>arr[j])
            {
                int tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;

            }
        }
    }
    int tem=0;
    for(int i=0;i<4;i++)
    {
        tem=tem*10+arr[i];
    }
    return tem;
}
int desending(int num)
{  int arr[4];
    for(int i=0;i<4;i++)
    {
        arr[i]=num%10;
        num=num/10;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(arr[i]<arr[j])
            {
                int tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;

            }
        }
    }
    int tem=0;
    for(int i=0;i<4;i++)
    {
        tem=tem*10+arr[i];
    }
    return tem;
}
int valid_check(int num)
{
  int arr[4];
  for(int i=0;i<4;i++)
  {
    arr[i]=num%10;
    num=num/10;

  }
 
 if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]==arr[3])
 {
    return 0;
 }
return 1;

}
int main()
{
    printf("Enter the 4 digit no\n");
    int num;
    scanf("%d",&num);
    int tem=num;
    int count=0;
    while(tem>0)
    {
        tem=tem/10;
        count++;

    }
    if(count!=4)
    {
        printf("the given value is not 4 digit\n");
        return 0;
    }
    int count2=0;
    if(valid_check(num)==0)
    {
        printf("Enter the distint number\n");
        return 0;

    }
    while(1)
    {
    int asc=accsending(num);
   int dsc=desending(num);
   num=dsc-asc;
   count2++;
   if(num==6174)
   {
    printf("The kaprekar value 6174  is found at %d iteration\n",count2);
    break;
   }
  
    }
}
