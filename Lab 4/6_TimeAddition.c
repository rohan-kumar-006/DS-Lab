#include <stdio.h>
struct time
{
    int hour;
    int min;
    int sec;

} n1, n2;
int main()
{
    printf("Enter the time1\n");
    printf("Enter the hours\n");
    scanf("%d", &n1.hour);
    printf("Enter the Minute\n");
    scanf("%d", &n1.min);
    printf("Enter the Seconds\n");
    scanf("%d", &n1.sec);

    printf("Enter the time2\n");
    printf("Enter the Hours\n");
    scanf("%d", &n2.hour);
    printf("Enter the Minutes\n");
    scanf("%d", &n2.min);
    printf("Enter the Seconds\n");
    scanf("%d", &n2.sec);

    int hour = n1.hour + n2.hour;
    int min = n1.min + n2.min;
    int sec = n1.sec + n2.sec;

    if(sec>59){
        min++;
        sec-=60;
    }
    if(min>59){
        hour++;
        min-=60;
    }


    printf("%d Hours\n%d Minutes\n%d Seconds",hour,min,sec);
}