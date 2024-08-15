#include <iostream>

double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);

int main(void){
    double a, b;
    char operation;

    std::cout << "Enter you numbers --> ";
    std::cin >> a >> b;

    std::cout << "Enter an operation --> ";
    std::cin >> operation;

    if (operation == '+')
        std::cout << "The result is " << addition(a, b) << std::endl;
    else if (operation == '-')
        std::cout << "The result is " << subtraction(a, b) << std::endl;
    else if (operation == '*')
        std::cout << "The result is " << multiplication(a, b) << std::endl;
    else if (operation == '/')
        std::cout << "The result is " << division(a, b) << std::endl;

    return 0;
}

double addition(double a, double b){
    return a + b;
}

double subtraction(double a, double b){
    return a - b;
}

double multiplication(double a, double b){
    return a * b;
}

double division(double a, double b){
    return a / b;
}
