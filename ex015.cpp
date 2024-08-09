#include <iostream>
#include <iomanip> // Biblioteca necessária para utilizar os manipuladores de fluxo

// Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias pelos quais ele foi alugado. Calcule o preço a pagar, sabendo que o carro custa R$60 por dia e R$0,15 por Km rodado.

int main(){

    double km;
    int dias;
    const int TAXA_DIA = 60;
    const double TAXA_KM = 0.15;
    double preco_pagar;

    std::cout << "Quantos dias alugados? ";
    std::cin >> dias;

    std::cout << "Quantos km rodados? ";
    std::cin >> km;

    preco_pagar = (TAXA_DIA * dias) + (TAXA_KM * km);

    std::cout << "O total a pagar e de R$" << std::fixed << std::setprecision(2) << preco_pagar;
    
    return 0;
}
/*
- #include <iomanip>: Biblioteca necessária para utilizar os manipuladores de fluxo
- fixed: Garante que o número seja exibido em notação decimal.
- setprecision(2): Limita a exibição a 2 casas decimais.
*/