#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n,i,j,k,ans;
    scanf("%d",&n);
    char p[n][7];
    int num[n];
    for(i=0; i<n; i++)
    {
        scanf("%s",p[i]);
    }
    for(i=0; i<n; i++)
    {
        if(p[i][0]>48&&p[i][0]<58)
            num[i]=atoi(p[i]);
        else if(p[i][0]=='-'&&p[i][1]>48&&p[i][1]<58)
            num[i]=atoi(p[i]);
        else
            num[i]=0;
    }
    for(i=0; i<n; i++)
    {
        if(p[i][0]=='-'&&num[i]==0)
        {
            for(j=i-1;j>=0;j--)
            {
                if(num[j]!=0)
                    break;
            }
            for(k=j-1;k>=0;k--)
            {
                if(num[k]!=0)
                    break;
            }
            num[i]=num[k]-num[j];
            num[k]=0;
            num[j]=0;
        }
        else if(p[i][0]=='+')
        {
            for(j=i-1;j>=0;j--)
            {
                if(num[j]!=0)
                    break;
            }
            for(k=j-1;k>=0;k--)
            {
                if(num[k]!=0)
                    break;
            }
            num[i]=num[k]+num[j];
            num[k]=0;
            num[j]=0;
        }
        else if(p[i][0]=='*')
        {
            for(j=i-1;j>=0;j--)
            {
                if(num[j]!=0)
                    break;
            }
            for(k=j-1;k>=0;k--)
            {
                if(num[k]!=0)
                    break;
            }
            num[i]=num[k]*num[j];
            num[k]=0;
            num[j]=0;
        }
        if(i==n-1)
        {
            ans=num[i];
        }
    }
    printf("%d",ans);
    return 0;
}
