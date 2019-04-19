#include<stdio.h>
int main()
{
    char Name[15];
    float Charge;
    int units;
    printf("Enter the name:\n");
    gets(Name);
    printf("Enter the unit:\n");
    scanf("%d",&units);
    if(units>=0&&units<=200)
    {
        Charge = 100+(units*.80);
    }
    else if(units>200&&units<=300)
    {
        Charge = 100+(units*.90);
    }
    else if(units>300&&units<=400)
    {
        Charge = 100+units;
    }
    else
        {
            Charge = (100+units)+(100+units)*15;
        }
    printf("Name:%s\nUnits:%d\nCharges:%.2f",Name,units,Charge);



}
