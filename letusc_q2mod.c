//program for converting km into m ,cm ,inch,feet
#include<stdio.h>
int main()
{
    float km,m ,cm,inch ,feet;
    printf("Enter distance between two cities in kilometers:-");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm*2.54;
    feet=inch/12;
    printf("Your distance in meters is:-%f",m);
    printf("Your distance in centimeter is%f :- ",cm);
    printf("Your distance in inch is:-%f",inch);


    printf("Your distance in Feets is:-%f",feet);
    return 0;
}

