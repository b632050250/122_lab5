#include<stdio.h>
int main()
{
    int n,i,m=0,j;
    scanf("%d",&n);
    if(n%2==0)
    {
        if(n%2==0)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<n; j++)
            {
                if(j==((n/2)+m)||j==((n/2)-m))
                {
                    printf("*");
                }
                else
                    printf("_");
            }
            printf("\n");
            if(i==(n/2))
            {
                continue;
            }
            else if(i>(n/2))
            {
                m--;
            }
            else
            {
                m++;
            }
        }
    }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(j==((n/2)+1+m)||j==((n/2)+1-m))
                {
                    printf("*");
                }
                else
                    printf("_");
            }
            printf("\n");
            if(i>=(n/2))
            {
                m--;
            }
            else
            {
                m++;
            }
        }
    }
    return 0;
}
