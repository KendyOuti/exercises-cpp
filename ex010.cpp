#include <iostream>
#include <iomanip>

/* Crie um programa que leia quanto dinheiro uma pessoa tem na carteira e mostre quantos dólares ela pode comprar */

int main() {

    double real;
    double dolar;

    std::cout << "Quanto dinheiro voce tem na carteira? R$";
    std::cin >> real;

    dolar = real / 5.62;

    std::cout << "Com R$" << real << " voce pode comprar U$" << std::setprecision(4) << dolar;

    return 0;
}

