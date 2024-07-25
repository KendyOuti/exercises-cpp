#include <iostream>

/* Escreva um programa que leia um valor em metros e o exiba convertido em centímetros e milímetros. */

int main() {

    double m;
    double cm;
    double mm;

    std::cout << "Distance in meters: ";
    std::cin >> m;

    cm = 100 * m;
    mm = 1000 * m;

    std::cout << "The distance is equal to\n";
    std::cout << cm << "cm" << '\n';
    std::cout << mm << "mm";

    return 0;
}
