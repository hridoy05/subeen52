#include<iostream>
#include<string>
#include<cstdio>
int main()
{
    int t;
    char a[101];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&a);
        int n=strlen(a);
        printf("%d/n",n);
        if(a[n]%2==0)
        {
            printf("even/n");
        }
        else
        {
            printf("odd/n");
        }
    }
}
