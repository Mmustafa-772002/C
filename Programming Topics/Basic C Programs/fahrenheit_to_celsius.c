
#include<stdio.h>
int main()
{
    int fahrenhit,celcius;
    printf("enter temprature in fahrenheit :");
    scanf("%d",&fahrenhit);
    celcius=(fahrenhit - 32) * 5/9;
    printf("temprature in celcius is : %d",celcius);
}