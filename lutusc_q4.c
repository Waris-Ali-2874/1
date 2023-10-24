//program for converting fahrenheit into centigrade
#include<stdio.h>
int main()
{
    float fht,cen;
    printf("Enter temperature in fahrenheit");
    scanf("%f",&fht);
    cen=(fht-32)*5/9;
    printf("Temperature in centigrade is :-%f",cen);
    return 0 ;


}
