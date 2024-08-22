#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

// O mesmo professor do desafio 019 quer sortear a ordem de apresentação de trabalhos dos alunos. Faça um programa que leia o nome dos quatro alunos e mostre a ordem sorteada.

int main(){

    srand(time(NULL));

    std::string alunos[4] = {};
    std::vector<int> numeros = {};
    int cont = 0;
    int n;

    for(int i = 0; i < 4; i++){
        std::cout << "Aluno " << (i + 1) << ':';
        std::cin >> alunos[i];
    }

    while(cont < 4){
        n = (rand() % 4);
        if (std::find(numeros.begin(), numeros.end(), n) == numeros.end()) {
            numeros.push_back(n);
            cont += 1;
        }
    }

    std::cout << "\nA ordem de apresentacao sera: " << '\n';

    for(int i = 0; i < 4; i++){
        std::cout << (i + 1) << " - " << alunos[numeros[i]] << '\n';
    }

    return 0;
}

/*

- iostream: Para entrada e saída padrão.
- ctime: Para funções relacionadas ao tempo.
- vector: Para trabalhar com vetores.
- algorithm: Para algoritmos da biblioteca padrão, como std::find.

- função .push_back(n): adiciona n ao final do vector 
- função find():
    #include <algorithm>
    std::find(iterador_inicio, iterador_fim, valor_a_procurar);

    Em C++, quando utilizamos a função find() para procurar um elemento em um container como um vetor, a função retorna um iterador. Esse iterador aponta para a posição do elemento encontrado, caso ele exista. No entanto, se o elemento não for encontrado, a função retorna um iterador que é igual a end() do container.

- Em C++, quando trabalhamos com containers como vector, list, set e outros, os métodos .begin() e .end() são ferramentas cruciais para iterar e manipular os elementos desses containers.

    .begin():

        - Retorna: Um iterador que aponta para o primeiro elemento do container.
        - Utilidade: É o ponto de partida para percorrer os elementos do container, seja em um loop for ou em algoritmos da STL.

    .end():

        - Retorna: Um iterador que aponta para a posição após o último elemento do container. Importante: Este iterador não aponta para um elemento válido, mas sim para uma posição imaginária logo após o final do container.
        - Utilidade: Serve como delimitador em loops e algoritmos, indicando o fim do container. Ao comparar um iterador com .end(), podemos verificar se chegamos ao final do container e encerrar a operação.

*/