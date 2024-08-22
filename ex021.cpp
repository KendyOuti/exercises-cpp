#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::string nome;
    std::string maiusculo;
    std::string minusculo;
    std::string primeiro_nome = "";
    int size;
    int cont_branco = 0;
    int num_caracteres = 0;
    int k = 0;

    std::cout << "Digite seu nome completo: ";
    std::getline(std::cin, nome);
    maiusculo = nome;
    minusculo = nome;

    std::transform(maiusculo.begin(), maiusculo.end(), maiusculo.begin(), toupper);
    std::transform(minusculo.begin(), minusculo.end(), minusculo.begin(), tolower);

    size = nome.length();
    for(int i = 0; i < size; i++){
        if(nome[i] == ' '){
            cont_branco += 1;
        }
    }
    
    num_caracteres = nome.length() - cont_branco;

    while(true){
        if(nome[k] == ' '){
            break;
        }
        else{
            primeiro_nome += nome[k];
            k += 1;
        }
    }

    std::cout << "\nSeu nome em maiusculas e " << maiusculo << '\n';
    std::cout << "Seu nome em minusculas e " << minusculo << '\n';
    std::cout << "Seu nome tem ao todo " << num_caracteres << " letras" << '\n';
    std::cout << "Seu primeiro nome e " << primeiro_nome << " e ele tem " << k << " letras" << '\n';
    
    return 0;
}
/*
- std::transform: Este é o nome do algoritmo que estamos usando. Ele é definido na biblioteca <algorithm>.
- result.begin(): Este é um iterador que aponta para o início da string result. Ele é usado para indicar o início do intervalo de elementos que queremos transformar.
- result.end(): Este é um iterador que aponta para a posição após o último elemento da string result. Ele é usado para indicar o fim do intervalo de elementos que queremos transformar.
- result.begin(): Este é o mesmo iterador que usamos para indicar o início do intervalo. Neste caso, estamos especificando que queremos que os resultados da transformação sejam armazenados de volta na própria string result, sobrescrevendo os caracteres originais.
- toupper: Este é um ponteiro para a função toupper definida na biblioteca <cctype>. Essa função converte um caractere para maiúscula.
*/