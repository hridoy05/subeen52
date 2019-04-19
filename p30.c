#include<stdio.h>
#include<math.h>
int main()
{
    int T,i,temp;
    long long int N,sum=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld",&N);
        temp=sqrt(N);
        for(i=1;i<temp;i++)
        {
            if(N%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==N)
        {
            printf("YES,%lld is a perfect number!",N);
        }
        else
            printf("NO,%lld is not a perfect number!",N);

    }
    return 0;

}
