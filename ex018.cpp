#include <iostream>
#include <cmath>
#include <iomanip>

// Faça um programa que leia um ângulo qualquer e mostre na tela o valor do seno, cosseno e tangente desse ângulo.

int main(){

    double angulo_graus, angulo_radianos, seno, cosseno, tangente;

    std::cout << "Digite o angulo em graus: ";
    std::cin >> angulo_graus;

    // (1 grau = PI/180 radianos)
    angulo_radianos = angulo_graus * M_PI / 180;

    seno = sin(angulo_radianos);
    cosseno = cos(angulo_radianos);
    tangente = tan(angulo_radianos);

    std::cout << "Seno: " << seno << '\n';
    std::cout << "Cosseno: " << cosseno << '\n';
    std::cout << "Tangente: " << tangente << '\n';

    return 0;
}