#include <iostream>
using namespace std;

int main() {
    int num;
 
    // Solicita que o usuário digite um número inteiro positivo
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
 
    // Imprime uma mensagem na tela indicando que serão mostrados os primeiros números pares
    cout << "Os primeiros " << num << " numeros pares sao: ";
 
    // Loop que itera sobre os primeiros "num" números pares e os imprime na tela
    for (int i = 2; i <= num * 2; i += 2) {
        cout << i << " ";
    }

    return 0;
}
