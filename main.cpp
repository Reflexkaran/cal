#include <iostream>
#include <limits>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero.\n";
        return std::numeric_limits<double>::infinity();
    }
    return a / b;
}

int main() {
    std::cout << "Simple C++ Calculator\n";
    std::cout << "Operations: + - * /\n";

    double a, b;
    char op;
    std::cout << "Enter expression (e.g. 3.5 + 4): ";
    if (!(std::cin >> a >> op >> b)) {
        std::cerr << "Invalid input.\n";
        return 1;
    }

    double result;
    switch (op) {
        case '+': result = add(a, b); break;
        case '-': result = sub(a, b); break;
        case '*': result = mul(a, b); break;
        case '/': result = divide(a, b); break;
        default:
            std::cerr << "Unknown operator.\n";
            return 1;
    }

    std::cout << "Result: " << result << "\n";
    return 0;
}
