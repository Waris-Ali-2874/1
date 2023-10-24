#include<stdio.h>
int main ()
{
    int Basic;
    float hra,da,gross;
    printf("Enter your Basic  salary:-");
    scanf("%d",&Basic);
    hra=0.2*Basic;
    da=0.4*Basic;

    printf("Your gross salary :-%f",hra+da+Basic);
    return 0;
}
