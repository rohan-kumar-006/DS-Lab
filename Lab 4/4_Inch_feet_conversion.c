#include <stdio.h>
struct inch_feet
{
    int feet;
    float inch;
} d1, d2;
int main()
{
    printf("Enter the distance1\n");
    printf("Enter the Feets\n");
    scanf("%d", &d1.feet);
    printf("Enter the inches\n");
    scanf("%f", &d1.inch);

    printf("Enter the distance2\n");
    printf("Enter the Feets\n");
    scanf("%d", &d2.feet);
    printf("Enter the inches\n");
    scanf("%f", &d2.inch);

    int feet=d1.feet+d2.feet;
    float inch=d1.inch+d2.inch;
    
    if(inch>=12){
        feet++;
        inch-=12;
    }
    printf("%d'%f",feet,inch);

}