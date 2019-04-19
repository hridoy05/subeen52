#include<stdio.h>
#include<string.h>
int main()
{
    int t,n;
    char a[101];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&a);
        n=strlen(a);
        printf("%d\n",n);
        if(a[n-1]%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}

