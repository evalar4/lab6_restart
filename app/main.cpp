#include "solver.h"
#include <iostream>

int main() {
    float a, b, c;
    std::cout << "Quadratic equation solver (ax² + bx + c = 0)" << std::endl;
    std::cout << "Enter coefficients a, b, c: ";
    std::cin >> a >> b >> c;
    
    solve(a, b, c);
    
    return 0;
}
