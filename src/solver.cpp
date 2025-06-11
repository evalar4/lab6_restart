#include "solver.h"
#include <cmath>
#include <iostream>

void solve(float a, float b, float c) {
    // Special case: linear equation
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                std::cout << "All real numbers are solutions" << std::endl;
            } else {
                std::cout << "No solution (contradiction: 0 = " << c << ")" << std::endl;
            }
        } else {
            std::cout << "Linear equation solution: x = " << -c/b << std::endl;
        }
        return;
    }

    float discriminant = b*b - 4*a*c;
    
    // Positive discriminant - two real roots
    if (discriminant > 0) {
        float sqrt_d = std::sqrt(discriminant);
        float x1 = (-b + sqrt_d) / (2*a);
        float x2 = (-b - sqrt_d) / (2*a);
        std::cout << "Two real roots: " << x1 << " and " << x2 << std::endl;
    } 
    // Zero discriminant - one real root
    else if (discriminant == 0) {
        float x = -b / (2*a);
        std::cout << "Single real root: " << x << std::endl;
    } 
    // Negative discriminant - complex roots
    else {
        float real = -b / (2*a);
        float imag = std::sqrt(-discriminant) / (2*a);
        std::cout << "Complex roots: " 
                  << real << " + " << imag << "i and "
                  << real << " - " << imag << "i" << std::endl;
    }
}
