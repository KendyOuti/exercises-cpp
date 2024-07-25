#include <iostream>

/* Desenvolva um programa que leia as duas notas de um aluno, calcule e mostre a sua média */

int main() {

    double grade_1, grade_2;
    double average;

    std::cout << "Enter the fist grade: ";
    std::cin >> grade_1;

    std::cout << "Enter the second grade: ";
    std::cin >> grade_2;

    average = (grade_1 + grade_2) / 2;
    
    std::cout << "The average is " << average;

    return 0;
}
