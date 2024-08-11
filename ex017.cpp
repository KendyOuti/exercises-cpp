#include <iostream>
#include <cmath>
#include <iomanip>

// Faça um programa que leia o comprimento do cateto oposto e do cateto adjacente de um triângulo retângulo. Calcule e mostre o comprimento da hipotenusa.

int main(){

    double cateto_oposto;
    double cateto_adjacente;
    double hipotenusa;

    std::cout << "Comprimento do cateto oposto: ";
    std::cin >> cateto_oposto;
    std::cout << "Comprimento do cateto adjacente: ";
    std::cin >> cateto_adjacente;

    hipotenusa = sqrt(pow(cateto_oposto,2) + pow(cateto_adjacente,2));

    std::cout << "A hipotenusa vai medir: " << std::fixed << std::setprecision(2) << hipotenusa;

    return 0;
}
