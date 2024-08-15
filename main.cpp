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
        else if (operation == '/'){
            if (b == 0)
                std::cout << "Error: Division by zero." << std::endl;
            else
                std::cout << "The result is " << division(a, b) << std::endl;
        }
        else if (operation == '^')
            std::cout << "The result is " << power(a, b) << std::endl;
        else if (operation == 'r'){
            if (a < 0)
                std::cout << "Error: Cannot perform the square root of a negative number." << std::endl;
            else
                std::cout << "The result is " << square_root(a);
        }
        else if (operation == 'q')
            break;
        else
            std::cout << "Invalid operation. Please try again." << std::endl;
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
    return std::sqrt(a);
}
