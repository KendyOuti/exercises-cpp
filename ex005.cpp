#include <iostream>

/* Faça um programa que leia um número Inteiro e mostre na tela o seu sucessor e seu antecessor. */

int main() {

    int n;
    int previous;
    int next;

    std::cout << "Enter a integer: ";
    std::cin >> n;

    previous = n - 1;
    next = n + 1;

    std::cout << "The previous number is " << previous << " and the next number is " << next;

    return 0;
}
