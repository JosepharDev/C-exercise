#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

void printMenu(){
    printf("Avilable calculation\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. sin\n");
    printf("6. cos\n");
    printf("7. tan\n");
    printf("8. pow\n");
    printf("9. sqrt\n");
    printf("Enter 0 to exite\n");
    
    printf("Enter a number of calculation\n");
}

void sum();
void sub();
void DIV();
void mul();
void SIN();
void COS();
void TAN();
void POW();
void SQRT();

int main()
{
    printMenu();
    
    int operation;
    scanf("%d", &operation);
        switch(operation){
            case 1:
                sum();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                DIV();
                break;
            case 5:
                SIN();
                break;
            case 6:
                COS();
                break;
            case 7:
                TAN();
                break;
            case 8:
                POW();
                break;
            case 9:
                SQRT();
                break;
            default:
                printf("Wrong operation\n");
}
    
    return 0;
}

void sum(){
    printf("Enter two number to sum\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
}
void sub(){
    printf("Enter two number to sub\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d - %d = %d\n", a, b, a-b);
}
void DIV(){
    printf("Enter two number to divide\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d / %d = %d\n", a, b, a/b);
}
void mul(){
    printf("Enter two number to multiplay\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d * %d = %d\n", a, b, a*b);
}
void SIN(){
    printf("Enter a number to calculate Sin\n");
    int x;
    scanf("%d", &x);
    printf("sin(%d) = %f\n", x, sin(x));
}
void COS(){
    printf("Enter a number to calculate Cos\n");
    int x;
    scanf("%d", &x);
    printf("cos(%d) = %f\n", x, cos(x));
}
void TAN(){
    printf("Enter a number to calculate Tan\n");
    int x;
    scanf("%d", &x);
    printf("tan(%d) = %f\n", x, tan(x));
}
void POW(){
    printf("Enter two number to Power\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d ^ %d = %f\n", a, b, pow(a,b));
}
void SQRT(){
    printf("Enter a number to calculate Sqrt\n");
    int x;
    scanf("%d", &x);
    printf("sqrt(%d) = %f\n", x, sqrt(x));
}


