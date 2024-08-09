#include <iostream>

// Escreva um programa que converta uma temperatura digitando em graus Celsius e converta para graus Fahrenheit

int main(){

    double celcius;
    double fahrenheit;

    std::cout << "Informe a temperatura em C: ";
    std::cin >> celcius;

    fahrenheit = (((9.0 / 5) * celcius)) + 32;

    std::cout << "\nA temperatura de " << celcius << "C correspponde a " << fahrenheit << "F!";

    return 0;
}
/*
Ao adicionar .0 ao 9, estamos explicitamente dizendo ao compilador que queremos tratar 9 como um número de ponto flutuante. Isso força a divisão a ser realizada em ponto flutuante, resultando em um valor mais preciso.
*/
