#include<stdio.h>
int main()
{
    unsigned int n;
    scanf("%x",&n);
    int bits;
    scanf("%d",&bits);
 {
     int mask=(1<<bits)-1;
     int setbit=mask|n;
     printf("After setting %d bits from lsb : %x\n",bits,setbit);
 }
 {
     int mask=~((1<<bits)-1);
     int clearbit=mask&n;
     printf("After clearing %d bits from lsb : %x\n",bits,clearbit);
 }
 {
     int index=bits-1;
    
     int getbit=0;
     for(int i=index;i>=0;i--)
     { int mask=1<<index;
         if((mask&n)!=0)
         {
             getbit=getbit*2+1;
         }
         else
         {
              getbit=getbit*2;
         }
         index--;
         mask=1;
     }
   
     printf("After getting %d bits from lsb : %x\n",bits,getbit);
 }
}
