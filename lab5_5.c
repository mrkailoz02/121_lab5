#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int m;
    scanf("%d",&m);
    int sum=0;
    int check[(n-m+1)][(n-m+1)];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n-m+1;i++)
    {
        for(int j=0;j<n-m+1;j++)
        {
            sum=0;
            for(int k=i;k<m+i;k++)
            {
                for(int l=j;l<m+j;l++)
                {
                    sum=sum+a[k][l];
                }
            }
            check[i][j]=sum;
        }
    }
    int ans=check[0][0];
    for(int o=0;o<(n-m+1);o++)
    {
        for(int p=0;p<n-m+1;p++)
        {
            if(ans<check[o][p])
                ans=check[o][p];
        }
    }
    printf("%d",ans);
    return 0;
}
