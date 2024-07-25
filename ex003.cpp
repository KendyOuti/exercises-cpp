#include <iostream>

// Crie um programa que leia dois números e mostre a soma entre eles.
int main() {

    int n_1;
    int n_2;
    int sum;

    std::cout << "Enter a number: ";
    std::cin >> n_1;

    std::cout << "Enter another number: ";
    std::cin >> n_2;

    sum = n_1 + n_2;

    std::cout << "The sum of " << n_1 << " and " << n_2 << " is " << sum;
    
    return 0;
}