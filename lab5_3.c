#include<stdio.h>
int main()
{
    int a,n=0,b[3]={2,3,5},i,j=0,l;
    scanf("%d",&a);
    for(i=1;1;i++)
    {
        l=i;
        while(j!=3)
        {
            if(l%b[j]==0)
            {
                l/=b[j];
            }
            else
                j++;
        }
        j=0;
        if(l==1)
        {
            n++;
            if(n==a)
            {
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}
