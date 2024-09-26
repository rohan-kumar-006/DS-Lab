#include <stdio.h>
struct complex
{
    float real;
    float img;
} n1, n2;

void add(struct complex n1,struct complex n2){
    float real = n1.real + n2.real;
    float img = n1.img + n2.img;

    printf("ADDITION %.2f %.2fi\n", real, img);
}
void subtract(struct complex n1,struct complex n2){
    float real = n1.real - n2.real;
    float img = n1.img - n2.img;

    printf("SUBTRACTION %.2f %.2fi\n", real, img);
}
void multiply(struct complex n1,struct complex n2){
    float real=((n1.real*n2.real)-(n1.img*n2.img));
    float img=((n1.img*n2.real)+(n2.img*n1.real));
    printf("MULTIPLICATION %.2f %.2fi\n", real, img);
}


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
    add(n1,n2);
    subtract(n1,n2);
    multiply(n1,n2);
}