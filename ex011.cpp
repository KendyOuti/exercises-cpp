#include <iostream>

/* Faça um programa que leia a largura e a altura de uma parede em metros, calcule a sua área e a quantidade de tinta necessária para pintá-la, sabendo que cada litro de tinta pinta uma área de 2 metros quadrados. */

int main(){

    double largura;
    double altura;
    double area;
    double volume_tinta;

    std::cout << "Largura da parede: ";
    std::cin >> largura;
    std::cout << "Altura da parede: ";
    std::cin >> altura;

    area = largura * altura;
    volume_tinta = area / 2;

    std::cout << "Sua parede tem dimensao de " << largura << " x " << altura << " e sua area e de " << area << "m^2";
    std::cout << "\nPara pintar essa parede, voce precisa de " << volume_tinta << "l de tinta";

    return 0;
}
