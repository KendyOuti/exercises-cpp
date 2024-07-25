#include <iostream>

/* Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas-vindas */

int main() {

    std::string name;
    
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Nice to meet you, " << name << "!";

    return 0;
}
