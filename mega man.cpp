#include <iostream>
#include <string> // incluindo a biblioteca string para trabalhar com strings
using namespace std;

int main() {
    int life; // declaração da variável inteira life
    float energy; // declaração da variável float energy
    bool status; // declaração da variável booleana status
    string character; // declaração da variável string character
    
    life = 5; // atribuição do valor 5 à variável life
    energy = 99.99f; // atribuição do valor 99.99 à variável energy
    status = true; // atribuição do valor verdadeiro à variável status
    character = "Mega Man"; // atribuição da string "Mega Man" à variável character
    
    cout << life << endl; // impressão do valor da variável life, seguido de uma quebra de linha
    cout << energy << endl; // impressão do valor da variável energy, seguido de uma quebra de linha
    cout << status << endl; // impressão do valor da variável status (true ou false), seguido de uma quebra de linha
    cout << character << endl; // impressão do valor da variável character, seguido de uma quebra de linha
    
    return 0; // retorno da função main() com valor 0
}
