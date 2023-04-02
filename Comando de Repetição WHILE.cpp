#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
 
    // Solicita ao usuário que digite um número inteiro positivo
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
 
    // Loop while que imprime todos os números de 1 até o número digitado pelo usuário
    while (i <= num) {
        cout << i << " ";
        i++;
    }
    
    return 0;
}
