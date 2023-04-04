#include <stdio.h>
#include <math.h>
#include <string.h>

double power1(){
    printf("Enter a number and the power you to raise it : ");
    double number, raisingPower;
    scanf("%lf%lf", &number, &raisingPower);
    double result = pow(number, raisingPower);
    return result;
}

double squareRoot1(){
    printf("Enter the number you want to find the square root of : ");
    double number;
    scanf("%lf", &number);
    double result = sqrt(number);
    return result;
}

double division1(){
    printf("Enter the numbers that you want to devide : ");
    double number1, number2;
    scanf("%lf%lf", &number1,&number2);
    double result = number1/number2;
    return result;
}

double multiplication1(){
    printf("Enter the numbers that you want to multiplicate : ");
    double number1, number2;
    scanf("%lf%lf", &number1,&number2);
    double result = number1*number2;
    return result;
}

double subtruction1(){
    printf("Enter the numbers that you want to substruct : ");
    double number1, number2;
    scanf("%lf%lf", &number1,&number2);
    double result = number1-number2;
    return result;
}

double sumation1(){
    printf("Enter the number that you want to add togather : ");
    double number1, number2;
    scanf("%lf%lf", &number1,&number2);
    double result = number1+number2;
    return result;
}

int main(){
    printf("Set the action you want to perform (+ - * / pow sqrt) : ");
    char action[20];
    scanf("%s", action);
    if(!strcmp(action, "+")){
        printf("The result is : %lf", sumation1());
    }
    else if(!strcmp(action, "-")){
        printf("The result is : %lf", subtruction1());
    }
    else if(!strcmp(action, "*")){
        printf("The result is : %lf", multiplication1());
    }
    else if(!strcmp(action, "/")){
        printf("The result is : %lf", division1());
    }
    else if(!strcmp(action, "pow")){
        printf("The result is : %lf", power1());
    }
    else if(!strcmp(action, "sqrt")){
        printf("The result is : %lf", squareRoot1());
    }
    return 0;
}