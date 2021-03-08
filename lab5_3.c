#include<stdio.h>
int main()
{
    int i,j=0,k,n,m=0,p,q;
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
            while(i%2!=0)
            {
                m++;
            }
            if(i!=0)
            while(i%3!=0)
            {
                m++;
            }
            if(i!=0)
            while(i%5!=0)
            {
                m++;
            }
    }
    printf("%d",n+m);
    return 0;
}
