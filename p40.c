#include<stdio.h>
int main()
{
    int T,i,x,k,sum=1,power=1;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&x,&k);
        for(i=1;i<=k;i++)
        {
           power=power*x;
           sum=sum+power;
        }
        printf("%d",sum);
    }
    return 0;
}
