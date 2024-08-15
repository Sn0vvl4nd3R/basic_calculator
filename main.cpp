#include <iostream>
#include <cmath>

void loop();
double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);
double power(double a, double b);
double square_root(double a);

int main(void){

    loop();

    return 0;
}

void loop(){
    double a, b;
    char operation;

    while (true){
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
        else if (operation == '^')
            std::cout << "The result is " << power(a, b) << std::endl;
        else if (operation == 'r')
            std::cout << "The result is " << square_root(a) << std::endl;
        else if (operation == 'q')
            break;
    }
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

double power(double a, double b){
    return std::pow(a, b);
}

double square_root(double a){
    return std::pow(a, 0.5);
}
