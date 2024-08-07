#include <iostream>

// Faça um algoritmo que leia o preço de um produto e mostre seu novo preço, com 5% de desconto.

int main() {

    double preco;
    double preco_c_desconto;

    std::cout << "Qual e o preco do produto? R$";
    std::cin >> preco;

    preco_c_desconto = preco * 0.95;

    std::cout << "\nO produto que custava R$" << preco << ", na promocao com desconto vai custar R$" << preco_c_desconto;

    return 0;
}