#include<stdio.h>
int main()
{
    int T,i;
    char str[101];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",str);
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                printf("%d",str[i]-64);
            }
            else
            {
                if(str[i]>='a'&&str[i]<='z');
                {
                    printf("%d",str[i]-97);
                }
            }
        }
    }
    return 0;
}
