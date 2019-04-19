#include<stdio.h>
int main()
{
    int T,s,i;
    char num[100];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",num);
        s=strlen(num);
        i=s;
        if(num[i]=='0'||num[i]=='2'||num[i]=='4'||num[i]=='6'||num[i]=='8')
            {
                printf("even\n");
            }
            else
                printf("odd\n");

    }


}
