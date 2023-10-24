//program for calculating aggregate marks and percentage of the student . we take marks obtained by the student as input
#include<stdio.h>
int main()
{
    float marks1,marks2,marks3,marks4,marks5,tms,percentage;
    printf("Enter your marks scored in subject 1 :-");
    scanf("%f",&marks1);
    printf("Enter your marks scored in subject 2 :-");
    scanf("%f",&marks2);
    printf("Enter your marks scored in subject 3 :-");
    scanf("%f",&marks3);
    printf("Enter your marks scored in subject 4 :-");
    scanf("%f",&marks4);
    printf("Enter your marks scored in subject 5 :-");
    scanf("%f",&marks5);
    tms=marks1+marks2+marks3+marks4+marks5;
    printf("Total marks obtained are:-%f",tms);
    percentage=(tms/500)*100;
    printf("Your percentage is:-%f",percentage);

    return 0;


}
