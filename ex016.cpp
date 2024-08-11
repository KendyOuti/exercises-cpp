#include <iostream>
#include <cmath>

// Crie um programa que leia um número Real qualquer pelo teclado e mostre na tela a sua porção Inteira.

int main(){

    double numero_real;
    int parte_inteira; 

    std::cout << "Digite um valor: ";
    std::cin >> numero_real;
    
    parte_inteira = trunc(numero_real); // Função trunc() trunca um número

    std::cout << "\nO valor digitado foi " << numero_real << " e a sua parte inteira e " << parte_inteira;

    return 0;
}