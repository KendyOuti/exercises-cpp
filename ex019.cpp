#include <iostream>
#include <ctime>

// Um professor quer sortear um dos seus quatro alunos para apagar o quadro. Faça um programa que ajude ele, lendo o nome dos alunos e escrevendo na tela o nome do escolhido

int main(){

    srand(time(NULL));

    int num = (rand() % 4) + 1;

    std::string alunos[4];

    std::cout << "Primeiro aluno: ";
    std::cin >> alunos[0];
    std::cout << "Segundo aluno: ";
    std::cin >> alunos[1];
    std::cout << "Terceiro aluno: ";
    std::cin >> alunos[2];
    std::cout << "Quarto aluno: ";
    std::cin >> alunos[3];

    std::cout << "O aluno escolhido foi " << alunos[num];

    return 0;
}
