#include<stdio.h>
int main()
{
    char s[100];
    int T,i;
    scanf("%d",&T);
    while(T--)
    {
        scanf(" %[^\n]",s);
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='L')
            {
                s[i]=s[i-1];
            }
            if(s[i]=='R')
            {
                s[i]=s[i+1];
            }
        }
        printf("%s\n",s);
    }
    return 0;
}
