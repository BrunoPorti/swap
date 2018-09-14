//Autor: Bruno Portilla Hinojosa
// el objetivo es que el usuario ingrese tres numero y el programa los devuelva en orden de menor a mayor.
#include <stdio.h>
void Swap(double *a, double *b) {   
    double order;

    if(*a > *b){
        order = *a;
        *a = *b;
        *b = order;
    }
}

int main() {
    double num1;
    double num2;
    double num3;

    printf("please enter 3 numbers:(a, b, c)\n");
    scanf("%lf, %lf, %lf", num1, num2, num3);

    Swap(&num1, &num2);
    Swap(&num1, &num3);
    Swap(&num2, &num3);

    printf("These are your numbers from small to big:\n %lf, %lf ,and %lf", num1, num2, num3);
    return 0;
}