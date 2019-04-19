#include<stdio.h>
#include<string.h>
#include<string.h>
int main()
{
    int T,i,j;
    char s1[135],s2[135];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s %s",s1,s2);
        for(i=0;i<strlen(s1);i++)
        {
            if(s2[0]==s1[i])
            {
                for(j=1;j<strlen(s2);j++)
                {
                    if(s2[j]!=s1[i+j])break;
                }
                if(j==strlen(s2))
                {
                    printf("%d\n",i);
                }

            }
        }



    }
    return 0;
}
