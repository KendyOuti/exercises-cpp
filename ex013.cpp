#include <iostream>

// Faça um algoritmo que leia o salário de um funcionário e mostre seu novo salário, com 15% de aumento.

int main() {

    double salario;
    double salario_ajustado;

    std::cout << "Qual e o salario do Funcionario? R$";
    std::cin >> salario;

    salario_ajustado = salario * 1.15;

    std::cout << "\nO funcionario que ganhava R$" << salario << ", passa a receber R$" << salario_ajustado;

    return 0;
}