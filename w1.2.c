#include<stdio.h>
int main()
{
     float C, F;
    printf("enter temperature in celcius:\n");
    scanf("%f", &C );
    F=(9*C/5)+32;
    printf("the fahrenheit temperature is:%f\n",F);
    return 0;
} 
