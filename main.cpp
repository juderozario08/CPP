#include <iostream>

void printPolynomial(int coefficients[], int size){
    std::string output;
    int degree = size - 1;
    int i = 0;
    while(degree != -1){
        if (coefficients[i] <= 0 )
            output.append("-");
        else if (i != 0)
            output.append("+");
        output.append(std::to_string(abs(coefficients[i])));
        if (degree != 0){
            output.append("x^");
            output.append(std::to_string(degree));
        }
        degree--; i++;
    }
    std::cout << output << std::endl;
}

int main() {
    std::cout << "Degree of the function: ";
    int degree; std::cin >> degree; degree++;
    int coefficients[degree];
    std::cout << "Enter the coefficients (Highest degree first):\n";
    for (int i = 0; i < degree; i++){
        std::cin >> coefficients[i];
    }
    printPolynomial(coefficients, degree);
    return 0;
}