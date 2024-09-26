//5. Write a program to add two complex numbers using structure. The values of the complex number is to be taken from the user.
#include <stdio.h>
struct complex
{
    float real;
    float img;
} n1, n2;
int main()
{
    printf("Enter the number1\n");
    printf("Enter the realpart\n");
    scanf("%f", &n1.real);
    printf("Enter the imaginarypart\n");
    scanf("%f", &n1.img);

    printf("Enter the number2\n");
    printf("Enter the realpart\n");
    scanf("%f", &n2.real);
    printf("Enter the imaginarypart\n");
    scanf("%f", &n2.img);

    float real = n1.real + n2.real;
    float img = n1.img + n2.img;

    printf("%f %fi", real, img);
}