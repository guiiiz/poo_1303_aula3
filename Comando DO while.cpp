#include <iostream>
using namespace std;

int main() {
    int num;
 
    // Loop do-while que solicita ao usuário que digite um número entre 1 e 10 até que o número seja válido
    do {
        cout << "Digite um numero entre 1 e 10: ";
        cin >> num;
    } while (num < 1 || num > 10);
 
    // Imprime na tela o número digitado pelo usuário
    cout << "Voce digitou o numero " << num << "." ;
 
    return 0;
}
