#include <iostream>
#include <cmath>

/* Crie um algoritmo que leia um número e mostre o seu dobro, triplo e raiz quadrada. */

int main() {

    double num;
    double double_num;
    double triple_num;
    double sqrt_num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    double_num = 2 * num;
    triple_num = 3 * num;
    sqrt_num = sqrt(num);

    std::cout << "Double = " << double_num;
    std::cout << "\nTiple = " << triple_num;
    std::cout << "\nSquare root = " << sqrt_num;
    
    return 0;
}
