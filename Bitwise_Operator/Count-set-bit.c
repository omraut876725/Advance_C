#include<stdio.h>
int main()
{
   unsigned int n;
    scanf("%X",&n);
    int mask=1;
    int ans=0;
    for(int i=0;i<32;i++)
    {
        if((mask&n)!=0)
        {
            ans++;
        }
        mask=mask<<1;
    }
    printf("Number of set bits: %d",ans);
}
