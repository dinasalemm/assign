#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#define pi 3.14
int main()
{
    float time_12=0.0;
    float time_24=0.0;
    printf("enter time in 24 hours:\n");
    scanf("%f",&time_24);
    if(time_24>12)
    {
        time_12=time_24-12;
        printf("time in 12 hours is %f PM",time_12);
    }
else
{
time_12=time_24;

printf("time in 12 hours is %f Am",time_12);

}
    return 0;
}
